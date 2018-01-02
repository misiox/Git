/*
 * main.cpp
 *
 *  Created on: 2 sty 2018
 *      Author: malot
 */

#include <File.h>
#include <string>

int main() {

	Net net;
	std::string s="net.txt";
	File file(s);
	file.readFile(net);


	return 0;
}


