//! Basic error handling functions implementation
/*! \file basic.cpp
 *
 */

#include "basic.h"

void Basic::printError() {
	std::cerr << "Unexpected error occurred!\n" << std::endl;
}

void Basic::printError(std::string error) {
	std::cerr << error << "\n" << std::endl;
}
