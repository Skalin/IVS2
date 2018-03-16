#include<iostream>



class Math {
public:
	double addition(double operand1, double operand2);
	double subtraction(double operand1, double operand2);
	double multiplication(double operand1, double operand2);
	double division(double operand1, double operand2);
	double powerOf(double operand1, int exponent);
	double factorial(int operand1);
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
	return (operand1/operand2);
}

Math::powerOf(double operand1, int exponent) {
	try {
		if (exponent < 0) {
			throw exponent;
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


Math::factorial(int operand1) {
	try {
		if (operand1 < 0) {
			throw operand1;
		} else {
			for (int i = 0; i < operand1; i++) {
			
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
