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
		\param double operand1 first addend
		\param double operand2 second addend
		\return double Result of addition
	*/
	double addition(double operand1, double operand2);
	
	//! Calculation of subtraction
	/*!
		Function for calculation of subtraction of two numbers
		\param double operand1 minuend
		\param double operand2 subtrahend
		\return double Result of subtraction
	*/
	double subtraction(double operand1, double operand2);
	
	//! Calculation of multiplication of two doubles
	/*!
		Function for calculation of multiplication of two doubles
		\param double operand1 first number
		\param double operand2 second number
		\return double Result of multiplication
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
		\param int operand1 dividend
		\param int operand2 divisor
		\return int Result of division
	*/
	double division(double operand1, double operand2);
	
	//! Calculation of power
	/*!
		Function for calculation of power with natural exponent
		\param double operand cardinal number
		\param int exponent natural exponent
		\return double Result of power
	*/
	double powerOf(double operand, int exponent);
	
	//! Calculation of factorial
	/*!
		Function for calculation of factorial
		\param int operand positive integer
		\return int Result of factorial
	*/
	int factorial(int operand);
	
	//! Calculation of square root
	/*!
		Function for calculation of square root
		\param double operand the root of the root
		\param int exponent exponent of the root
		\return double Result of square root
	*/
	double root(double operand, int exponent);
	
	//! Calculation of sum
	/*!
		Function for calculation of sum of entered numbers
		\param std::vector<double>* vector vector of entered numbers
		\return double Result of sum
	*/
	double sum(std::vector<double>* vector);
	
	//! Calculation of average
	/*!
		Function for calculation of average of entered numbers
		\param std::vector<double>* vector vector of entered numbers
		\return double Result of average
	*/
	double average(std::vector<double>* vector);
	
	//! Calculation of partial sum
	/*!
		Function for calculation of partial sum of entered numbers
		\param std::vector<double>* vector vector of entered numbers
		\param int amount number of entered numbers
		\return double Result of partial sum
		\sa sum()
	*/
	double sum(std::vector<double>* vector, int amount);
	
	//! Calculation of partial average
	/*!
		Function for calculation of partial average of entered numbers
		\param std::vector<double>* vector vector of entered numbers
		\param int amount number of entered numbers
		\return double Result of partial average
		\sa average()
	*/
	double average(std::vector<double>* vector, int amount);
};



#endif //IVS2_CALC_H
