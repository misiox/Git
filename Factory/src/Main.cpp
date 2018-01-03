//============================================================================
// Name        : Factory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * main.cpp
 *
 *  Created on: 2 sty 2018
 *      Author: malot
 */

#include "File.h"
#include <string>
#include <iostream>

int main() {

	Net net;
	std::string s="dane.txt";
	std::cout << s << std::endl;
	File file(s);
	file.readFile(net);


	return 0;
}



