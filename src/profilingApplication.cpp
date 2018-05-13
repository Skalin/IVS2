//! Profiling program implementation
/*! \file profilingApplication.cpp
 *	\brief Profiling application implementation
 *
 */

#include "profilingApplication.h"

void printInfo() {
	std::cout << "Profiling application for deviation function of Calculator application." << std::endl << std::endl;
	std::cout << "Function expects input of numbers on which the application runs profiling tests, which determine the efficiency of the deviation function from Math class in math.cpp" << std::endl;
	std::cout << "Numbers must be entered as a list of numbers divided by one space." << std::endl;
	std::cout << "Team: Must remove kebab" << std::endl << std::endl;

	std::cout<< "Please enter input: ";
}

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
	int pos;
	while ((pos =this->getInput().find(" ")) > -1) {
		if (debug) {
			std::cout << "POS: " << pos << std::endl;
			std::cout << this->getInput().substr(0,pos) << std::endl;
		}
		doubleVector.push_back(convertToDouble(this->getInput().substr(0, pos)));
		this->setInput(this->getInput().substr(pos+1));
		if (debug) {
			std::cout << "New input: " << this->getInput() << std::endl;
			std::cout << "doubleVector: " << doubleVector.size() << std::endl;
		}
	}
	doubleVector.push_back(convertToDouble(this->getInput().substr(0)));
	this->setInput("");
	this->setDoubleVector(doubleVector);
	if (debug) {
		std::cout << "doubleVector size: " << this->getDoubleVector().size() << std::endl;
	}
}

void ProfilingApplication::setDoubleVector(std::vector<double> vectorOfDoubles) {
	this->vectorOfDoubles = vectorOfDoubles;
}

std::vector<double>& ProfilingApplication::getDoubleVector() {
	return this->vectorOfDoubles;
}

int main(int argc, char *argv[]) {
	printInfo();
	std::string input;
	getline(std::cin, input);
	ProfilingApplication Profiler(input);
	Profiler.convertStringToDoubleVector();
	std::cout << Profiler.deviation(&Profiler.getDoubleVector()) << std::endl;
	return 0;
}