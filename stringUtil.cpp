
#include <iostream>
#include <cctype>

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

void unindent() {
	// uses std::cin to read in lines form a file and removes their tabbing

	std::string line;

	while (std::getline(std::cin, line)) {
		std::cout << removeLeadingSpaces(line) << std::endl;
	}

	return;
}


int main() {

	unindent();
	return 0;
}