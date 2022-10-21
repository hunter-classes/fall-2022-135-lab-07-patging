/* 
Patrick Ging
Professor Zamanksy
Lab 7A
unIndent.cpp
*/

#include <iostream>
#include "stringUtil.h"

int main() {
	// reads in lines from a cpp file and will remove all
	// indentation and will cat it out. 

	std::string line;

	while (std::getline(std::cin, line)) {
		std::cout << removeLeadingSpaces(line) << std::endl;
	}

	return 0;
}