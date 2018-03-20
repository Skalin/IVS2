#include "calc.h"



void printError() {
	std::cerr << "Unexpected error occured!\n" << std::endl;
}

void printError(std::string error) {
	std::cerr << error << "\n" << std::endl;
}

double baseMath::addition(double operand1, double operand2) {
	double result;
	try {
		result = operand1 + operand2;
	} catch (...) {
		printError();
	}
	return result;
}

double baseMath::subtraction(double operand1, double operand2) {
	double result;
	try {
		result = operand1 - operand2;
	} catch (...) {
		printError();
	}
	return result;
}

double baseMath::multiplication(double operand1, double operand2) {
	double result;
	try {
		result = operand1 * operand2;
	} catch (...) {
		printError();
	}
	return result;
}

int baseMath::multiplication(int operand1, int operand2) {
	int result;
	try {
		result = operand1 * operand2;
	} catch (...) {
		printError();
	}
	return result;
}

double baseMath::division(double operand1, double operand2) {
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

double advancedMath::powerOf(double operand, int exponent) {
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

int advancedMath::factorial(int operand) {
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
double advancedMath::root(double operand, int exponent) {
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

double advancedMath::sum(double *arrayOfOperands) {
	double sum = 0.0;
	try {
		for (unsigned int i = 0; i < (sizeof(arrayOfOperands)/sizeof(double)); i++) {
			sum += arrayOfOperands[i];
		}
	} catch (...) {
		printError();
	}
	return sum;
}


int main() {
	
	advancedMath advancedMath1;
	
	std::cout << advancedMath1.addition(1.0, 2.0) << std::endl;
	std::cout << advancedMath1.subtraction(5, 2) << std::endl;
	std::cout << advancedMath1.multiplication(5, 2) << std::endl;
	std::cout << advancedMath1.division(6, 2) << std::endl;
	std::cout << advancedMath1.powerOf(5, 2) << std::endl;
	std::cout << advancedMath1.factorial(5) << std::endl;
	std::cout << advancedMath1.root(81, 4) << std::endl;
	double sumArray[] = {10, 20, 30, 40, 50};
	std::cout << advancedMath1.sum(sumArray) << std::endl;
	
	std::cout << "Sample calculator source code" << std::endl;
	return 0;
}
