//
// Created by Dominik on 20-Mar-18.
//

#include<iostream>
#include<stdexcept>
#include <vector>

#ifndef IVS2_CALC_H
#define IVS2_CALC_H


void printError();
void printError(std::string error);

class baseMath {
public:
	double addition(double operand1, double operand2);
	double subtraction(double operand1, double operand2);
	double multiplication(double operand1, double operand2);
	int multiplication(int operand1, int operand2);
	double division(double operand1, double operand2);
protected:
private:
};


class advancedMath : public baseMath {
public:
	double powerOf(double operand, int exponent);
	int factorial(int operand);
	double root(double operand, int exponent);
	double sum(double *arrayOfNumbers, int size);
protected:
private:
};

class Parser {
public:
    std::vector <std::string> &parseInput(std::string input);
protected:
    std::vector <std::string> getInputData();
    void setInputData(std::vector<std::string> &inputData);
    bool cleanInputData();
private:
    std::vector<std::string> &inputData;
};


#endif //IVS2_CALC_H
