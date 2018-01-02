/*
 * File.cpp
 *
 *  Created on: 1 sty 2018
 *      Author: malot
 */


#include <File.h>
#include <iostream>


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
		    	while ( getline(file,data) != "") {
		    		int i=0,flag=0;
		    		while (i<data.length()) {
		    			if (data[i]=="=") {
		    				i++;
		    				temp="";
		    				while (data[i] != " " && i<data.length()) {
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
		    		}
		    		std::cout << id << delivery_interval << std::endl;
		    		Ramp name(id,delivery_interval);
		    		net.addRamp(name);

		    	}

		    	getline(file,temp);
		    	getline(file,temp);
		    	while ( getline(file,data) != "") {
		    		int i=0,flag=0;
		    		while (i<data.length()) {
		    			if (data[i]=="=") {
		    				i++;
		    				temp="";
		    				while (data[i] != " " && i<data.length()) {
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
		    		std::cout << id << processing_time << queue_type << std::endl;
		    		Worker name(id,processing_time,queue_type);
		    		net.addWorker(name);

		    	}

		    	getline(file,temp);
		    	getline(file,temp);
		    	while ( getline(file,data) != "") {
		    		int i=0;
		    		while (i<data.length()) {
		    			if (data[i]=="=") {
		    				i++;
		    				temp="";
		    				while (data[i] != " " && i<data.length()) {
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

		    	}


		    	getline(file,temp);
		    	getline(file,temp);
		    	while ( getline(file,data) != "") {
		    		int i=0;
		    		while (i<data.length()) {
		    			if (data[i]=="=") {
		    				i++;
		    				temp="";
		    				while (data[i] != "-" && i<data.length()) {
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


		    	}









		        file.close();
		    }
	}
	void File::modifyFile(Net net);
	void File::createFile(Net net);
	void File::createFile(std::string report);
	std::string File::get_fileName();



