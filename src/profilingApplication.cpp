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

void ProfilingApplication::setInput(std::string input) {
	this->input = input;
}

std::string ProfilingApplication::getInput() {
	return this->input;
}

void ProfilingApplication::convertStringToDoubleVector() {
	std::vector<double> doubleVector = {};
	long long pos;
	while (this->getInput().find(" ") < 0) {
		pos = this->getInput().find(" ");
		std::cout << "POS? " << pos << std::endl;
		std::cout << this->getInput().substr(0,pos) << std::endl;
		doubleVector.push_back(convertToDouble(this->getInput().substr(0, pos)));
		this->setInput(this->getInput().substr(pos+1));
		std::cout << "New input: " << this->getInput() << std::endl;
	}
	doubleVector.push_back(convertToDouble(this->getInput().substr(0)));
	this->setInput("");
	this->setDoubleVector(doubleVector);
	std::cout << "VElikost vektoru: " << this->getDoubleVector().size() << std::endl;
}

void ProfilingApplication::setDoubleVector(std::vector<double> &vectorOfDoubles) {
	this->vectorOfDoubles = vectorOfDoubles;
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