#include<iostream>



class Math {
public:
	double addition(double operand1, double operand2);
	double subtraction(double operand1, double operand2);
	double multiplication(double operand1, double operand2);
	double division(double operand1, double operand2);
	double powerOf(double operand1, int exponent);
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
		if (exponent < 1) {
			throw exponent;
		} else {
			double result = operand1;
			for (int i = 1; i < exponent; i++) {
				result *= result;
			}
			return result;
		}
	} catch (...){
		printError();
	}
}

void printError() {
	std::cerr << "Unexpected error occured!\n" << std::endl;
}

int main() {
	
	Math math;
	
	
	cout << "Sample calculator source code" << endl;
	return 0;
}
