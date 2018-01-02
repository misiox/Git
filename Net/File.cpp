/*
 * File.cpp
 *
 *  Created on: 1 sty 2018
 *      Author: malot
 */


#include <File.h>


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
		    		Ramp name(id,delivery_interval);
		    		net.addRamp(name);

		    	}

		    	getline(file,data);
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
		    		}
		    		Worker name(id,processing_time,queue_type);
		    		net.addWorker(name);

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
		    					name = "storehouse" + temp;
		    					flag++;
		    				}

		    		}
		    		Storehouse name(id);
		    		net.addStorehouse(name);

		    	}



		        //tu operacje na pliku (zapis/odczyt)
		        file.close();
		    }
	}
	void modifyFile(Net net);
	void createFile(Net net);
	void createFile(std::string report);
	std::string get_fileName();



