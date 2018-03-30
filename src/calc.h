#ifndef IVS2_CALC_H
#define IVS2_CALC_H

#include <stdexcept>
#include <vector>
#include <algorithm>
#include "basic.h"

class Math : public Basic {
public:
	double addition(double operand1, double operand2);
	double subtraction(double operand1, double operand2);
	double multiplication(double operand1, double operand2);
	int multiplication(int operand1, int operand2);
	double division(double operand1, double operand2);
	double powerOf(double operand, int exponent);
	int factorial(int operand);
	double root(double operand, int exponent);
	double sum(std::vector <double> *vector);
	double average(std::vector <double> *vector);
	double sum(std::vector <double> *vector, unsigned int amount);
	double average(std::vector <double> *vector, int amount);
};



#endif //IVS2_CALC_H
