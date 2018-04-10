//! Profiling program implementation
/*! \file profilingApplication.cpp
 *
 */

#include "profilingApplication.h"

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