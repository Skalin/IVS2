//! \file basic.cpp
/*! Header file containing the declaration of basic error handling functions
 */

#include "basic.h"

void Basic::printError() {
	std::cerr << "Unexpected error occurred!\n" << std::endl;
}

void Basic::printError(std::string error) {
	std::cerr << error << "\n" << std::endl;
}
