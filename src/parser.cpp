#include "parser.h"

std::vector <std::string> Parser::getInputData() {
		return this->inputData;
}

void Parser::setInputData(std::vector<std::string> &input) {
	this->inputData = input;
}

void Parser::solve(std::vector<std::string> &input) {
	this->cleanInputData();
	this->setInputData(input);

	unsigned int maxPriority = 3;

	for (unsigned i = maxPriority; i > 0; i--) {
		this->solveResult(i);
		/* just for remembering what each part of the code does
			this->solveResult(3); // factorials
			this->solveResult(2); // powers and roots
			this->solveResult(1); // multiplication and division
			this->solveResult(0); // addition subtraction
		*/
	}
	
	// expected output after the for cycle should be class variable vector<string> containing only one item = result

}

void Parser::cleanInputData() {
	while (!this->inputData.empty()) {
		this->inputData.pop_back();
	}
}

void Parser::solveResult(unsigned int priority) {
	if (priority == -1) {
		std::string operation = this->inputData.at(0);
		this->inputData.erase(this->inputData.begin());
		// TODO conversion of inputData vector<string> to vector<double> should happen here
		std::string str;
		if (operation == "SUM") {
			str = std::to_string(this->sum(inputData));
			this->setInputData({str});
		} else if (operation == "AVG") {
			str = std::to_string(this->average(inputData));
			this->setInputData({str});
		} else if (operation == "DEV") {
			str = std::to_string(this->deviation(inputData));
			this->setInputData({str});
		}
	} else {
		for (unsigned int i = 0; i < this->inputData.size(); i++) {
			string str;
			if (priority == 3) {
				if (this->inputData.at(i) == "!") {
					this->inputData.at(i-1) = std::to_string(this->factorial(stod(this->inputData.at(i-1))));
					this->inputData.erase(this->inputData.begin()+i);
				}
			} else if (priority == 2) {

			} else if (priority == 1) {

			} else if (priority == 0) {

			}
		}
	}
}

string Parser::solve(std::vector<std::string> &input, unsigned int type) {
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
