/* 
Patrick Ging
Professor Zamanksy
Lab 7B
main.cpp
*/

#include <iostream>
#include <fstream>
#include "stringUtil.h"

int main() {

	// uses std::cin to read in lines form a file and removes their tabbing

	std::string line;
	int tabs = 0;

	std::ofstream outfile;
   	outfile.open("output.cpp");

	while (std::getline(std::cin, line)) {
		line = removeLeadingSpaces(line); // stripping it of tabs
		
		outfile << createTabs(tabs) << line << std::endl;

		if (hasChar(line, '{')) { // indenting
			tabs += 1;
		} else if (hasChar(line,'}')) { // unindenting
			tabs = tabs - 1;
		}
	}

	return 0;
}