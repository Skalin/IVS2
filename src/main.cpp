#include "parser.h"

int main() {
	
	Profiling Math1;
	
	std::cout << Math1.addition(1.0, 2.0) << std::endl;
	std::cout << Math1.subtraction(5, 2) << std::endl;
	std::cout << Math1.multiplication(5, 2) << std::endl;
	std::cout << Math1.division(6, 2) << std::endl;
	std::cout << Math1.powerOf(5, 2) << std::endl;
	std::cout << Math1.factorial(5) << std::endl;
	std::cout << Math1.root(81, 4) << std::endl;
	std::vector<double> DoubleVector (5);
	DoubleVector.at(0) = 10;
	DoubleVector.at(1) = 20;
	DoubleVector.at(2) = 30;
	DoubleVector.at(3) = 40;
	DoubleVector.at(4) = 50;
	std::cout << Math1.sum(DoubleVector) << std::endl;
	std::cout << Math1.average(DoubleVector) << std::endl;
	
	std::cout << "Sample calculator source code" << std::endl;
	return 0;
}
