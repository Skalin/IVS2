#include "parser.h"

Parser::Parser(){
	inputData.reserve(0);
}

std::vector <std::string>& Parser::getInputData() {
		return this->inputData;
}

void Parser::setInputData(std::vector<std::string> input) {
	this->inputData = input;
}

void Parser::cleanInputData() {
	while (!this->inputData.empty()) {
		this->inputData.pop_back();
	}
}

std::vector <double>& Parser::getDoubleData() {
	return this->doubleData;
}

std::vector<double> &Parser::convertToDouble(){
    this->getDoubleData().resize(this->getInputData().size()-1);
    std::transform(this->getInputData().begin(), this->getInputData().end(), this->getDoubleData().begin(), [](std::string &val) {
		 return std::stod(val);
 	});
    return this->getDoubleData();
}

void Parser::solveResult(int priority) {
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
					this->getInputData().erase(this->getInputData().begin() + i);
				}
			} else if (priority == 2 || priority == 1 || priority == 0) {
				if (priority == 2) {
					if (this->getInputData().at(i) == "^") {
						this->getInputData().at(i - 1) = std::to_string(this->powerOf(stod(this->getInputData().at(i - 1)), stoi(this->getInputData().at(i + 1))));
					} else if (this->getInputData().at(i) == "√") {
						this->getInputData().at(i - 1) = std::to_string(this->root(stod(this->getInputData().at(i - 1)), stoi(this->getInputData().at(i + 1))));
					}
				} else if (priority == 1) {
					if (this->getInputData().at(i) == "*") {
						this->getInputData().at(i - 1) = std::to_string(this->multiplication(stod(this->getInputData().at(i - 1)), stod(this->getInputData().at(i + 1))));
					} else if (this->getInputData().at(i) == "/") {
						this->getInputData().at(i - 1) = std::to_string(this->division(stod(this->getInputData().at(i - 1)), stod(this->getInputData().at(i + 1))));
					}
				} else if (priority == 0) {
					if (this->getInputData().at(i) == "+") {
						this->getInputData().at(i - 1) = std::to_string(this->addition(stod(this->getInputData().at(i - 1)), stod(this->getInputData().at(i + 1))));
					} else if (this->getInputData().at(i) == "-") {
						this->getInputData().at(i - 1) = std::to_string(this->subtraction(stod(this->getInputData().at(i - 1)), stod(this->getInputData().at(i + 1))));
					}
				}
				this->getInputData().erase(this->getInputData().begin() + i);
				this->getInputData().erase(this->getInputData().begin() + i + 1);
			}
		}
	}
}

std::string Parser::solve(std::vector<std::string> &input, unsigned int type) {
	this->cleanInputData();
	this->setInputData(input);

	unsigned int maxPriority = 3;

	// priority  -1 for sums, averages and deviations, 3 factorials, 2 powers and roots, 1 multiplication and division, 0 addition and subtraction
	if (type == 0) {
		for (unsigned i = maxPriority; i > 0; i--) {
			this->solveResult(i);
		}
	} else {
		this->solveResult(-1); // sums, averages, devations
	}		
		// expected output after the for cycle should be class variable vector<string> containing only one item = result
	return this->getInputData().at(0);
}
