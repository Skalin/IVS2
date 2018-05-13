//! Math operations implementation
/*! \file calc.cpp
 *	\brief Math library implementation
 *
 */

#include "calc.h"

double Math::addition(double operand1, double operand2) {
	double result;
	try {
		result = operand1 + operand2;
	} catch (std::underflow_error) {
		printError("Underflow error!");
		return -INFINITY;
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return INFINITY;
	} catch (...) {
		printError();
		return nan("");
	}
	return result;
}

double Math::subtraction(double operand1, double operand2) {
	double result;
	try {
		result = operand1 - operand2;
	} catch (std::underflow_error) {
		printError("Underflow error!");
		return -INFINITY;
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return INFINITY;
	} catch (...) {
		printError();
		return nan("");
	}
	return result;
}

double Math::multiplication(double operand1, double operand2) {
	double result;
	try {
		result = operand1 * operand2;
	} catch (std::underflow_error) {
		printError("Underflow error!");
		return -INFINITY;
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return INFINITY;
	} catch (...) {
		printError();
		return nan("");
	}
	return result;
}

double Math::division(double operand1, double operand2) {
	try {
		if (operand2 == 0)
			throw std::invalid_argument("Division by zero!");
		return (operand1/operand2);
	} catch (std::invalid_argument &e) {
		printError(e.what());
		return NAN;
	} catch (std::underflow_error) {
		printError("Underflow error!");
		return INFINITY;
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return -INFINITY;
	} catch (...) {
		printError();
		return nan("");
	}
}

double Math::powerOf(double operand, double exponent) {
	try {
		if (exponent < 0) {
			throw std::range_error("Exponent is not natural number!");
		} else {
			double result = 1.0;
			for (int i = 0; i < exponent; i++) {
				result = multiplication(result, operand);
			}
			return result;
		}
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return INFINITY;
	} catch (std::range_error &e) {
		printError(e.what());
		return nan("");
	} catch (...) {
		printError();
		return nan("");
	}
}

double Math::factorial(int operand) {
	double result = 1;
	try {
		if (operand < 0) {
			throw std::range_error("Number cannot be negative!");
		} else {
			for (int i = 1; i <= operand; i++) {
				result = multiplication(result, double(i));
			}
			return result;
		}
	} catch (std::range_error &e) {
		printError(e.what());
		return nan("");
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return INFINITY;
	} catch (...) {
		printError();
		return nan("");
	}
}

// Newton's method
double Math::root(double operand, int exponent) {
	double x = 1.0;
	try {
		if (exponent <= 0) {
			throw std::range_error("Number cannot be negative or zero!");
		} else {
			double dx;
			double eps(10e-6);
			x = operand * 0.5;
			dx = (operand/powerOf(x,exponent-1)-x)/exponent;
			while(dx >= eps || dx <= -eps){
				x = x + dx;
				dx = (operand/powerOf(x,exponent-1)-x)/exponent;
			}
			return x;
		}
	} catch (std::range_error &e) {
		printError(e.what());
		return nan("");
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return INFINITY;
	} catch (std::underflow_error) {
		printError("Underflow error!");
		return -INFINITY;
	} catch (...) {
		printError();
		return nan("");
	}
}

double Math::sum(std::vector <double>* arrayOfDoubles) {
	double sum = 0.0;
	try {
		for (unsigned int i = 0; i < arrayOfDoubles->size(); i++){
			sum += arrayOfDoubles->at(i);
		}
		return sum;
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return INFINITY;
	} catch (std::underflow_error) {
		printError("Underflow error!");
		return -INFINITY;
	} catch (...) {
		printError();
		return nan("");
	}
}

double Math::average(std::vector <double>* arrayOfDoubles) {
	return this->sum(arrayOfDoubles)/arrayOfDoubles->size();
}


double Math::sum(std::vector <double>* arrayOfDoubles, unsigned long amount) {
	double sum = 0.0;
	try {
		for (unsigned int i = 0; i < amount; i++){
			sum += arrayOfDoubles->at(i);
		}
		return sum;
	} catch (std::overflow_error) {
		printError("Overflow error!");
		return INFINITY;
	} catch (std::underflow_error) {
		printError("Underflow error!");
		return -INFINITY;
	} catch (...) {
		printError();
		return nan("");
	}
}

double Math::average(std::vector <double>* arrayOfDoubles, unsigned long amount) {
	unsigned long realAmount = amount;
	if (realAmount > arrayOfDoubles->size()) {
		realAmount = arrayOfDoubles->size();
	}
	return this->sum(arrayOfDoubles, realAmount)/realAmount;
}

double Math::negate(double number) {
	return -number;
}
