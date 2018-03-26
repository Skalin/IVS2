#ifndef IVS2_CALC_H
#define IVS2_CALC_H

#include <stdexcept>
#include <vector>
#include <algorithm>
#include "basic.h"

//! Math library class.
/*!
	Class of Math library functions.
*/
class Math : public Basic {
public:
	//! Calculation of addition.
	/*!
		Function for calculation of addition of two numbers.
		\param operand1 first addend.
		\param operand2 second addend.
		\return Result of addition.
	*/
	double addition(double operand1, double operand2);
	
	//! Calculation of substraction.
	/*!
		Function for calculation of substraction of two numbers.
		\param operand1 minuend.
		\param operand2 subtrahend.
		\return Result of substraction.
	*/
	double subtraction(double operand1, double operand2);
	
	//! Calculation of multiplication of two doubles.
	/*!
		Function for calculation of multiplication of two doubles.
		\param operand1 first number.
		\param operand2 second number.
		\return Result of multiplication.
	*/
	double multiplication(double operand1, double operand2);
	
	//! Calculation of multiplication of two integers.
	/*!
		Function for calculation of multiplication of two integers.
		\param operand1 first number.
		\param operand2 second number.
		\return Result of multiplication.
	*/
	int multiplication(int operand1, int operand2);
	
	//! Calculation of division.
	/*!
		Function for calculation of division of two numbers.
		\param operand1 dividend.
		\param operand2 divisor.
		\return Result of division.
	*/
	double division(double operand1, double operand2);
	
	//! Calculation of power.
	/*!
		Function for calculation of power with natural exponent.
		\param operand cardinal number.
		\param exponent natural exponent.
		\return Result of powerOf.
	*/
	double powerOf(double operand, int exponent);
	int factorial(int operand);
	double root(double operand, int exponent);
	double sum(std::vector <double> *vector);
	double average(std::vector <double> *vector);
	double sum(std::vector <double> *vector, int amount);
	double average(std::vector <double> *vector, int amount);
};



#endif //IVS2_CALC_H
