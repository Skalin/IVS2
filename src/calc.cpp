#include<iostream>
#include<stdexcept>



class baseMath {
public:
	double addition(double operand1, double operand2);
	double subtraction(double operand1, double operand2);
	double multiplication(double operand1, double operand2);
	double division(double operand1, double operand2);
};

baseMath::addition(double operand1, double operand2) {
	return (operand1 + operand2);
}

baseMath::subtraction(double operand1, double operand2) {
	return (operand1 - operand2);
}

baseMath::multiplication(double operand1, double operand2) {
	return (operand1 * operand2);
}

baseMath::division(double operand1, double operand2) {
	if (operand2 == 0)
		throw std::overflow_error("Division by zero!");
	return (operand1/operand2);
}

class advancedMath : public baseMath {
public:
	double powerOf(double operand, int exponent);
	double factorial(int operand);
	double root(double operand, int exponent);
	double sum(double *arrayOfNumbers);
};



advancedMath::powerOf(double operand, int exponent) {
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
	} catch (...){
		printError();
	}
}

advancedMath::factorial(int operand) {
	try {
		if (operand < 0) {
			throw std::range_error("Number cannot be negative!");
		} else {
			int result = 1;
			for (int i = 1; i <= operand; i++) {
				result = multiplication(result, i);
			}
			return result;
		}
	} catch (...) {
		printError();
	}
}

// Newton's method
advancedMath::root(double operand, int exponent) {
	try {
		if (exponent <= 0) {
			throw std::range_error("Number cannot be negative or zero!");
		} else {
			double x;
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
	} catch (...) {
		printError();
	}
}

advancedMath::sum(double *arrayOfOperands) {
	double sum = 0.0;
	for (unsigned int i = 0; i < sizeof(arrayOfOperands)/sizeof(double); i++) {
		sum += arrayOfOperands[i];
	}
	return sum;
}

void printError() {
	std::cerr << "Unexpected error occured!\n" << std::endl;
}

int main() {
	
	baseMath math;
	
	std::cout << Math.addition(1, 2) << std::endl;
	std::cout << Math.subtraction(5, 2) << std::endl;
	std::cout << Math.multiplication(5, 2) << std::endl;
	std::cout << Math.division(6, 2) << std::endl;
	std::cout << Math.powerOf(5, 2) << std::endl;
	std::cout << Math.factorial(5) << std::endl;
	std::cout << Math.root(81, 4) << std::endl;
	
	cout << "Sample calculator source code" << endl;
	return 0;
}
