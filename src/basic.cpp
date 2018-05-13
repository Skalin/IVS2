//! Basic error handling functions implementation
/*! \file basic.cpp
 *  \brief Error handler implementation
 *
 */

#include "basic.h"

bool debug = false;

void Basic::printError() {
	std::cerr << "Unexpected error occurred!\n" << std::endl;
}

void Basic::printError(std::string error) {
	std::cerr << error << "\n" << std::endl;
}

double Basic::convertToDouble(const std::string number) {
	double num = 0.0;
	std::stringstream ss;
	ss << number;
	ss >> num;

	return num;
}