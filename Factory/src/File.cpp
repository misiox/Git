/*
 * File.cpp
 *
 *  Created on: 1 sty 2018
 *      Author: malot
 */


#include "File.h"
#include <iostream>
#include "ProductQueueLIFO.h"
#include "ProductQueueFIFO.h"
#include "Net.h"
#include "Ramp.h"


	File::File(std::string fileName) {
		_fileName = fileName;
	}
	void File::readFile(Net net) {
		std::fstream file;
		std::cout << "jestem w readFile()" << std::endl;
		std::cout << _fileName << std::endl;
		 file.open( _fileName , std::ios::in | std::ios::out );

		 //  Czytanie z pliku przy jednoczesnym tworzeniu obiektow sieci a pozniej dodawaniu polaczen
		    if( file.good() == true )
		    {
		    	std::cout << "otwarto plik" << std::endl;
		    	std::string data,name,temp,queue_type;
		    	std::vector<Ramp> ramp;
		    	std::cout << "1" << std::endl;
		    	int id,delivery_interval,processing_time;
		    	std::cout << "2" << std::endl;
		    	getline(file,temp);
		    	file >> temp;
		    	std::cout << temp << std::endl;
		    	getline(file,temp);
		    	getline(file,data);
		    	std::cout << data << std::endl;
		    	while ( data != "") {
		    		std::cout << "jestem w while" << std::endl;
		    		int i=0,flag=0;
		    		while (i<data.length()) {
		    			if (data[i] == '=') {
		    				i++;
		    				temp="";
		    				while ( (data[i] !=' ') && i<data.length()) {
		    					temp+=data[i];
		    					i++;
		    				}
		    				if (flag==0) {
		    					id = std::stoi(temp);
		    					name = "ramp" + temp;
		    					flag++;
		    				}
		    				if (flag==1) delivery_interval = std::stoi(temp);

		    				}
		    			else {
		    				i++;
		    			}
		    		}
		    		std::cout << id << delivery_interval << std::endl;
		    		Ramp r1(id,delivery_interval);
		    		ramp.push_back(r1);
		    		net.addRamp(r1);
		    		getline(file,data);

		    	}

		    	std::vector<ProductQueueLIFO> LIFO;
		    	std::vector<Worker> worker;
		    	std::vector<ProductQueueFIFO> FIFO;
		    	getline(file,temp);
		    	getline(file,temp);
		    	getline(file,data);
		    	while ( data != "") {
		    		int i=0,flag=0;
		    		while (i<data.length()) {
		    			if (data[i]=='=') {
		    				i++;
		    				temp="";
		    				while (data[i] != ' ' && i<data.length()) {
		    					temp+=data[i];
		    					i++;
		    				}
		    				if (flag==0) {
		    					id = std::stoi(temp);
		    					name = "worker" + temp;

		    				}
		    				if (flag==1) processing_time = std::stoi(temp);

		    				if (flag==2) queue_type=temp;

		    				flag++;
		    				}
		    			else {
		    				i++;
		    			}



		    		}
		    		if (queue_type == "LIFO") {



		    			Worker w1(id,processing_time,&LIFO[id-1]);
		    			worker.push_back(w1);
		    			net.addWorker(worker[id-1]);
		    		}
		    		else {


		    			Worker w1(id,processing_time,&FIFO[id-1]);
		    			worker.push_back(w1);
		    			net.addWorker(worker[id-1]);
		    		}
		    		std::cout << id << processing_time << queue_type << std::endl;


		    		getline(file,data);

		    	}

		    	getline(file,temp);
		    	std::vector<Storehouse> storehouse;
		    	getline(file,temp);
		    	getline(file,data);
		    	while ( data != "") {
		    		int i=0;
		    		while (i<data.length()) {
		    			if (data[i]=='=') {
		    				i++;
		    				temp="";
		    				while (data[i] != ' ' && i<data.length()) {
		    					temp+=data[i];
		    					i++;
		    				}

		    				id = std::stoi(temp);
		    				name = "storehouse" + temp;


		    			}

		    			else {
		    				i++;
		    			}

		    		}
		    		std::cout << id << std::endl;
		    		Storehouse s1(id);
		    		storehouse.push_back(s1);
		    		net.addStorehouse(s1);
		    		getline(file,data);

		    	}


		    	getline(file,temp);
		    	getline(file,temp);
		    	getline(file,data);
		    	while ( data != "") {
		    		int i=0;
		    		while (i<data.length()) {
		    			if (data[i]=='=') {
		    				i++;
		    				temp="";
		    				while (data[i] != '-' && i<data.length()) {
		    					temp+=data[i];
		    					i++;
		    				}

		    				id = std::stoi(temp);
		    				name = "storehouse" + temp;


		    			}

		    			else {
		    				i++;
		    			}

		    		}
		    		getline(file,data);


		    	}









		        file.close();
		    }

		    else std::cout << "plik nie zostal otworzony" << std::endl;
	}
	void modifyFile(Net net) {

	}
	void createFile(Net net) {

	}
	void createFile(std::string report) {

	}
	std::string get_fileName() {
		std::string s;
		return s;

	}



