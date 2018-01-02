/*
 * File.h
 *
 *  Created on: 1 sty 2018
 *      Author: malot
 */

#ifndef FILE_H_
#define FILE_H_

#include <string>
#include <Net.h>
#include <fstream>

class File {
private:
	std::string _fileName;
public:
	File(std::string fileName);
	void readFile(Net net);
	void modifyFile(Net net);
	void createFile(Net net);
	void createFile(std::string report);
	std::string get_fileName();

};



#endif /* FILE_H_ */
