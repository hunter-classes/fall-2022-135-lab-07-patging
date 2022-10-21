/* 
Patrick Ging
Professor Zamanksy
Lab 7
stringUtil.cpp
*/

#include <iostream>
#include <cctype>
#include <fstream>

std::string removeLeadingSpaces(std::string line) {
	/* 
	Removes leading spaces from a string and returns the string.
	*/

	std::string return_string = "";
	bool foundChar = false;

	for(int i=0; i<line.length();i++){
		if (! foundChar) { // we're still indexing spaces
			if (! std::isspace(line[i])) { 
				// we have left leading spaces and are reading chars
				return_string = return_string + line[i];
				foundChar = true;
			}
		}else { // indexing characters
				return_string = return_string + line[i];
		}
	}

	if (return_string == "") {
		// if the string had no leading spaces, it should return an empty string
		return line;
	}

	return return_string;
}

std::string createTabs(int num) {
	// creates a string w 
	std::string return_string = "";

	for (int i =0; i<num;i++) {
		return_string = return_string + "\t";
	}
	return return_string;
}

bool hasChar(std::string s, char c) {
	// returns if a char is in a string
	for(int i=0; i<s.length();i++) {
		if( s[i] == c) {
			return true;
		}
	}
	return false;
}
