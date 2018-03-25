#include "calc.h"

double Math::addition(double operand1, double operand2) {
	double result;
	try {
		result = operand1 + operand2;
	} catch (...) {
		printError();
	}
	return result;
}

double Math::subtraction(double operand1, double operand2) {
	double result;
	try {
		result = operand1 - operand2;
	} catch (...) {
		printError();
	}
	return result;
}

double Math::multiplication(double operand1, double operand2) {
	double result;
	try {
		result = operand1 * operand2;
	} catch (...) {
		printError();
	}
	return result;
}

int Math::multiplication(int operand1, int operand2) {
	int result;
	try {
		result = operand1 * operand2;
	} catch (...) {
		printError();
	}
	return result;
}

double Math::division(double operand1, double operand2) {
	try {
		if (operand2 == 0)
			throw std::overflow_error("Division by zero!");
		return (operand1/operand2);
	} catch (std::overflow_error &e) {
		printError(e.what());
	} catch (...) {
		printError();
	}
}

double Math::powerOf(double operand, int exponent) {
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
	} catch (std::range_error &e) {
		printError(e.what());
	} catch (...) {
		printError();
	}
}

int Math::factorial(int operand) {
	int result = 1;
	try {
		if (operand < 0) {
			throw std::range_error("Number cannot be negative!");
		} else {
			for (int i = 1; i <= operand; i++) {
				result = multiplication(result, i);
			}
		}
	} catch (std::range_error &e) {
		printError(e.what());
	} catch (...) {
		printError();
	}
	return result;
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
		}
	} catch (std::range_error &e) {
		printError(e.what());
	} catch (...) {
		printError();
	}
	return x;
}

double Math::sum(std::vector <double> *arrayOfDoubles) {
	double sum = 0.0;
	try {
		for (unsigned int i = 0; i < arrayOfDoubles->size(); i++){
			sum += arrayOfDoubles->at(i);
		}
	} catch (...) {
		printError();
	}
	return sum;
}

double Math::average(std::vector <double> *arrayOfDoubles) {
	return this->sum(arrayOfDoubles)/arrayOfDoubles->size();
}


double Math::sum(std::vector <double> *arrayOfDoubles, int amount) {
	double sum = 0.0;
	try {
		for (unsigned int i = 0; i < amount; i++){
			sum += arrayOfDoubles->at(i);
		}
	} catch (...) {
		printError();
	}
	return sum;
}

double Math::average(std::vector <double> *arrayOfDoubles, int amount) {
	int realAmount = amount;
	if (realAmount > arrayOfDoubles->size()) {
		realAmount = arrayOfDoubles->size();
	}
	return this->sum(arrayOfDoubles, realAmount)/realAmount;
}