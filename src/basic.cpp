#include "basic.h"

void Basic::printError() {
	std::cerr << "Unexpected error occured!\n" << std::endl;
}

void Basic::printError(std::string error) {
	std::cerr << error << "\n" << std::endl;
}
