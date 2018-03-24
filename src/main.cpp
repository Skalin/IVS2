#include "calculator.h"

int main() {
	
	Calculator Calculator1;
	
	std::cout << Calculator1.addition(1.0, 2.0) << std::endl;
	std::cout << Calculator1.subtraction(5, 2) << std::endl;
	std::cout << Calculator1.multiplication(5, 2) << std::endl;
	std::cout << Calculator1.division(6, 2) << std::endl;
	std::cout << Calculator1.powerOf(5, 2) << std::endl;
	std::cout << Calculator1.factorial(5) << std::endl;
	std::cout << Calculator1.root(81, 4) << std::endl;
	std::vector<std::string> StringVector(6);
	StringVector.at(0) = "SUM";
	StringVector.at(1) = "1";
	StringVector.at(2) = "1";
	StringVector.at(3) = "1";
	StringVector.at(4) = "1";
	StringVector.at(5) = "1";
	std::vector<double> DoubleVector (5);
	DoubleVector.at(0) = 10;
	DoubleVector.at(1) = 20;
	DoubleVector.at(2) = 30;
	DoubleVector.at(3) = 40;
	DoubleVector.at(4) = 50;
	std::cout << Calculator1.sum(&DoubleVector) << std::endl;
	std::cout << Calculator1.average(&DoubleVector) << std::endl;
	std::cout << Calculator1.deviation(&DoubleVector) << std::endl;
	std::cout << "Size of StringVector: " << StringVector.size() << std::endl;
	std::cout << Calculator1.solve(StringVector, 1) << std::endl;
	
	std::cout << "Sample Calculator1 source code" << std::endl;
	return 0;
}
