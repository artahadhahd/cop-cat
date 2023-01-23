#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Invalid quantity of arguments: " << argc - 1 << "\nType \"cop -h\" for more information." << std::endl;
		exit(1);
	}

	std::fstream file;
	if (!strcmp(argv[1], "-h")){
		std::cout << "Usage: cop <file>\nPrints contents of a file\nUsage:\n\n  -h: display this help message" << std::endl;
		exit(0);
	}

	unsigned int line_number = 0;
	file.open(argv[1], std::ios::in);
	if (file.is_open()){
		std::cout << "Contents of " << argv[1] << std::endl;
		std::string line;
		while(std::getline(file, line)){
			line_number++;
			if (line_number < 10)
				std::cout << "    " << line_number << " | " << line << "\n";
			else if (line_number < 100)
				std::cout << "   " << line_number << " | " << line << "\n";
			else if (line_number < 1000)
				std::cout << "  " << line_number << " | " << line << "\n";
			else if (line_number < 10000)
				std::cout << " " << line_number << " | " << line << "\n";
			else if (line_number < 100000)
				std::cout << line_number << " | " << line << "\n";
		}
		file.close();
	}
	else {
		std::cout << "cop: file \"" << argv[1] << "\" was not found.\n";
		exit(1);
	}
	return 0;
}
