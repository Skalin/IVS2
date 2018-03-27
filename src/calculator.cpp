/** \file calculator.cpp
 \brief Calculator backend implementation
 */

#include "calculator.h"

Calculator::Calculator(){
	inputData.reserve(0);
	doubleData.reserve(0);
}

std::vector <std::string>& Calculator::getInputData() {
	return this->inputData;
}

void Calculator::setInputData(std::vector<std::string> input) {
	this->inputData = input;
}

void Calculator::cleanInputData() {
	while (!this->inputData.empty()) {
		this->inputData.pop_back();
	}
}

void Calculator::cleanDoubleData() {
	while (!this->doubleData.empty()) {
		this->doubleData.pop_back();
	}
}

std::vector <double>& Calculator::getDoubleData() {
	return this->doubleData;
}

void Calculator::setDoubleData(std::vector<double> input) {
	this->doubleData = input;
}


std::vector<double>& Calculator::convertToDouble(){
    this->getDoubleData().resize(this->getInputData().size());
    std::transform(this->getInputData().begin(), this->getInputData().end(), this->getDoubleData().begin(), [](std::string &val) {
		 return std::stod(val);
 	});
    return this->getDoubleData();
}

void Calculator::deleteItemsFromInputDataVector(unsigned int start, unsigned int amount) {
	for (unsigned int i = start+amount-1; i >= start; i--) {
		this->getInputData().erase(this->getInputData().begin() + i);
	}
}

void Calculator::solveResult(int priority) {
	if (priority == -1) {
		std::string operation = *&getInputData().at(0);
		this->getInputData().erase(this->getInputData().begin());
		std::string str;
		
		if (operation == "SUM") {
			str = std::to_string(this->sum(&this->convertToDouble()));
			this->setInputData({str});
		} else if (operation == "AVG") {
			str = std::to_string(this->average(&this->convertToDouble()));
			this->setInputData({str});
		} else if (operation == "DEV") {
			str = std::to_string(this->deviation(&this->convertToDouble()));
			this->setInputData({str});
		}
	} else {
		for (unsigned int i = 0; i < this->getInputData().size(); i++) {
			std::string str;
			if (priority == 3) {
				if (this->getInputData().at(i) == "!") {
					this->getInputData().at(i - 1) = std::to_string(this->factorial(stoi(this->getInputData().at(i - 1))));
					this->deleteItemsFromInputDataVector(i, 1);
				}
			} else if (priority <= 2 && priority >= 0) {
				if (priority == 2) {
					if (this->getInputData().at(i) == "^") {
						this->getInputData().at(i - 1) = std::to_string(this->powerOf(stod(this->getInputData().at(i - 1)), stoi(this->getInputData().at(i + 1))));
						this->deleteItemsFromInputDataVector(i, 2);
					} else if (this->getInputData().at(i) == "√") {
						this->getInputData().at(i - 1) = std::to_string(this->root(stod(this->getInputData().at(i - 1)), stoi(this->getInputData().at(i + 1))));
						this->deleteItemsFromInputDataVector(i, 2);
					}
				} else if (priority == 1) {
					if (this->getInputData().at(i) == "*") {
						this->getInputData().at(i - 1) = std::to_string(this->multiplication(stod(this->getInputData().at(i - 1)), stod(this->getInputData().at(i + 1))));
						this->deleteItemsFromInputDataVector(i, 2);
					} else if (this->getInputData().at(i) == "/") {
						this->getInputData().at(i - 1) = std::to_string(this->division(stod(this->getInputData().at(i - 1)), stod(this->getInputData().at(i + 1))));
						this->deleteItemsFromInputDataVector(i, 2);
					}
				} else if (priority == 0) {
					if (this->getInputData().at(i) == "+") {
						this->getInputData().at(i - 1) = std::to_string(this->addition(stod(this->getInputData().at(i - 1)), stod(this->getInputData().at(i + 1))));
						this->deleteItemsFromInputDataVector(i, 2);
					} else if (this->getInputData().at(i) == "-") {
						this->getInputData().at(i - 1) = std::to_string(this->subtraction(stod(this->getInputData().at(i - 1)), stod(this->getInputData().at(i + 1))));
						this->deleteItemsFromInputDataVector(i, 2);
					}
				}
			}
		}
	}
}

std::string Calculator::solve(std::vector<std::string>& input, unsigned int type) {
	this->cleanInputData();
	this->setInputData(input);

	unsigned int maxPriority = 3;

	// priority  -1 for sums, averages and deviations, 3 factorials, 2 powers and roots, 1 multiplication and division, 0 addition and subtraction
	if (type == 0) {
		for (int i = maxPriority; i >= 0; i--) {
			std::cout << i << std::endl;
			this->solveResult(i);
		}
	} else {
		this->solveResult(-1); // sums, averages, deviations
	}		
		// expected output after the for cycle should be class variable vector<string> containing only one item = result
	return this->getInputData().at(0);
}
