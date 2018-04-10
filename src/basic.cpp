//! Basic error handling functions implementation
/*! \file basic.cpp
 *
 */

#include "basic.h"

bool debug = true;

void Basic::printError() {
	std::cerr << "Unexpected error occurred!\n" << std::endl;
}


double Basic::convertToDouble(const std::string number) {
	double num = 0.0;
	std::stringstream ss;
	ss << number;
	ss >> num;

	return num;
}

void Basic::printError(std::string error) {
	std::cerr << error << "\n" << std::endl;
}
