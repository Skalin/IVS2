#include "parser.h"

std::vector <std::string> Parser::getInputData() {
		return this->inputData;
}

void Parser::setInputData(std::vector<std::string> &input) {
	this->inputData = input;
}

void Parser::cleanInputData() {
	while (!this->inputData.empty()) {
		this->inputData.pop_back();
	}
}

std::vector <double> Parser::convertToDouble(std::vector<std::string> &input){
    std::vector<double> doubleVector(input.size());
    std::transform(input.begin(), input.end(), doubleVector.begin(), [](std::string &val)
                     {
                         return std::stod(val);
                     });
    return doubleVector;
}

void Parser::solveResult(int priority) {
	if (priority == -1) {
		std::string operation = this->getInputData().at(0);
		this->inputData.erase(this->getInputData().begin());
		// TODO conversion of inputData vector<string> to vector<double> should happen here
		std::string str;
		if (operation == "SUM") {
			str = std::to_string(this->sum(this->getInputData()));
			this->setInputData({str});
		} else if (operation == "AVG") {
			str = std::to_string(this->average(this->getInputData()));
			this->setInputData({str});
		} else if (operation == "DEV") {
			str = std::to_string(this->deviation(this->getInputData()));
			this->setInputData({str});
		}
	} else {
		for (unsigned int i = 0; i < this->inputData.size(); i++) {
			std::string str;
			if (priority == 3) {
				if (this->getInputData().at(i) == "!") {
					this->getInputData().at(i-1) = std::to_string(this->factorial(stoi(this->getInputData().at(i-1))));
					this->getInputData().erase(this->getInputData().begin()+i);
				}
			} else if (priority == 2) {

			} else if (priority == 1) {

			} else if (priority == 0) {

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
	return inputData.at(0);
}
