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

}

string Parser::solve(std::vector<std::string> &input, unsigned int type) {

}
