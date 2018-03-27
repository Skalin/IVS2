//! \file calc.h
/*! Header file containing the declaration of mathematical functions
 */

#ifndef IVS2_CALC_H
#define IVS2_CALC_H

#include <stdexcept>
#include <vector>
#include <algorithm>
#include "basic.h"

//! Math library class
/*!
	Class of Math library functions
*/
class Math : public Basic {
public:
	//! Calculation of addition
	/*!
		Function for calculation of addition of two numbers
		\param operand1 first addend
		\param operand2 second addend
		\return Result of addition
	*/
	double addition(double operand1, double operand2);
	
	//! Calculation of subtraction
	/*!
		Function for calculation of subtraction of two numbers
		\param operand1 minuend
		\param operand2 subtrahend
		\return Result of subtraction
	*/
	double subtraction(double operand1, double operand2);
	
	//! Calculation of multiplication of two doubles
	/*!
		Function for calculation of multiplication of two doubles
		\param operand1 first number
		\param operand2 second number
		\return Result of multiplication
	*/
	double multiplication(double operand1, double operand2);
	
	//! Calculation of multiplication of two integers
	/*!
		Function for calculation of multiplication of two integers
		\param operand1 first number
		\param operand2 second number
		\return Result of multiplication
	*/
	int multiplication(int operand1, int operand2);
	
	//! Calculation of division
	/*!
		Function for calculation of division of two numbers
		\param operand1 dividend
		\param operand2 divisor
		\return Result of division
	*/
	double division(double operand1, double operand2);
	
	//! Calculation of power
	/*!
		Function for calculation of power with natural exponent
		\param operand cardinal number
		\param exponent natural exponent
		\return Result of power
	*/
	double powerOf(double operand, int exponent);
	
	//! Calculation of factorial
	/*!
		Function for calculation of factorial
		\param operand positive integer
		\return Result of factorial
	*/
	int factorial(int operand);
	
	//! Calculation of square root
	/*!
		Function for calculation of square root
		\param operand the root of the root
		\param exponent exponent of the root
		\return Result of square root
	*/
	double root(double operand, int exponent);
	
	//! Calculation of sum
	/*!
		Function for calculation of sum of entered numbers
		\param vector vector of entered numbers
		\return Result of sum
	*/
	double sum(std::vector<double>* vector);
	
	//! Calculation of average
	/*!
		Function for calculation of average of entered numbers
		\param vector vector of entered numbers
		\return Result of average
	*/
	double average(std::vector<double>* vector);
	
	//! Calculation of partial sum
	/*!
		Function for calculation of partial sum of entered numbers
		\param vector vector of entered numbers
		\param amount number of entered numbers
		\return Result of partial sum
		\sa sum()
	*/
	double sum(std::vector<double>* vector, int amount);
	
	//! Calculation of partial average
	/*!
		Function for calculation of partial average of entered numbers
		\param vector vector of entered numbers
		\param amount number of entered numbers
		\return Result of partial average
		\sa average()
	*/
	double average(std::vector<double>* vector, int amount);
};



#endif //IVS2_CALC_H
