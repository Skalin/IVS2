//
// Created by Dominik on 20-Mar-18.
//

#ifndef IVS2_CALC_H
#define IVS2_CALC_H

class baseMath {
public:
	double addition(double operand1, double operand2);
	double subtraction(double operand1, double operand2);
	double multiplication(double operand1, double operand2);
	double division(double operand1, double operand2);
};


class advancedMath : public baseMath {
public:
	double powerOf(double operand, int exponent);
	double factorial(int operand);
	double root(double operand, int exponent);
	double sum(double *arrayOfNumbers);
};


#endif //IVS2_CALC_H
