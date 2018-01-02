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


	File::File(std::string fileName) {
		_fileName = fileName;
	}
	void File::readFile(Net net) {
		std::fstream file;
		 file.open( _fileName, std::ios::in );

		 //  Czytanie z pliku przy jednoczesnym tworzeniu obiektow sieci a pozniej dodawaniu polaczen
		    if( file.good() == true )
		    {
		    	std::string data,name,temp,queue_type;
		    	int id,delivery_interval,processing_time;
		    	getline(file,temp);
		    	getline(file,temp);
		    	getline(file,data);
		    	while ( data != "") {
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
		    		Ramp name(id,delivery_interval);
		    		net.addRamp(name);
		    		getline(file,data);

		    	}

		    	std::vector<ProductQueueLIFO> LIFO;
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

		    			ProductQueue queue* = LIFO[id-1];
		    			Worker name(id,processing_time,queue);
		    		}
		    		else {

		    			ProductQueue* queue = FIFO[id-1];
		    			Worker name(id,processing_time,queue);
		    		}
		    		std::cout << id << processing_time << queue_type << std::endl;

		    		net.addWorker(name);
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
		    		Storehouse name(id);
		    		net.addStorehouse(name);
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



