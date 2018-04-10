//! Profiling program implementation
/*! \file profilingApplication.cpp
 *
 */

#include "profilingApplication.h"

ProfilingApplication::ProfilingApplication(std::string input) {
	this->input = input;
	this->vectorOfDoubles.reserve(0);
}

ProfilingApplication::~ProfilingApplication() {
	this->input = "";
	this->vectorOfDoubles.reserve(0);
}


std::vector<double>& ProfilingApplication::getDoubleVector() {
	return this->vectorOfDoubles;
}

int main(int argc, char *argv[]) {
	std::string input;
	getline(std::cin, input);
	ProfilingApplication Profiler(input);
	Profiler.convertStringToDoubleVector();
	Profiler.deviation(Profiler.getDoubleVector());
	return 0;
}