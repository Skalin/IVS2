#include<iostream>
#include<stdexcept>



class Math {
public:
	double addition(double operand1, double operand2);
	double subtraction(double operand1, double operand2);
	double multiplication(double operand1, double operand2);
	double division(double operand1, double operand2);
	double powerOf(double operand1, int exponent);
	double factorial(int operand);
};

Math::addition(double operand1, double operand2) {
	return (operand1 + operand2);
}

Math::subtraction(double operand1, double operand2) {
	return (operand1 - operand2);
}

Math::multiplication(double operand1, double operand2) {
	return (operand1 * operand2);
}

Math::division(double operand1, double operand2) {
	if (operand2 == 0)
		throw std::overflow_error("Division by zero!");
	return (operand1/operand2);
}

Math::powerOf(double operand1, int exponent) {
	try {
		if (exponent < 0) {
			throw std::range_error("Exponent is not natural number!");
		} else {
			double result = 1.0;
			for (int i = 0; i < exponent; i++) {
				result = multiplication(result, operand1);
			}
		}
	} catch (...){
		printError();
	}
}

Math::factorial(int operand) {
	try {
		if (operand < 0) {
			throw std::range_error("Number cannot be negative!");
		} else {
			int result = 1;
			for (int i = 1; i <= operand; i++) {
				result = multiplication(result, i)
			}
		}
	} catch (...) {
		printError();
	}
}

void printError() {
	std::cerr << "Unexpected error occured!\n" << std::endl;
}

int main() {
	
	Math math;
	
	std::cout << Math.add(1, 2) << std::endl;
	
	cout << "Sample calculator source code" << endl;
	return 0;
}
