#include "calc.h"

class Parser extends Math {
public:
		
	std::vector <string> Parser::getInputData() {
			return this->inputData;
	}

	void Parser::setInputData(std::vector<string> &input) {
		this->inputData = input;
	}


	void Parser::solve(std::vector<string> &input) {
		this->cleanInputData();
		this->setInputData(input);

		unsigned int maxPriority = 3;

		for (unsigned i = maxPriority; i > 0; i--) {
			this->solveResult(i);
			/* just for remembering what each part of the code does
				this->solveResult(3); // factorials, sums and averages
				this->solveResult(2); // powers and roots
				this->solveResult(1); // multiplication and division
				this->solveResult(0); // addition subtraction
			*/
		}

	}

protected:
private:
	bool Parser::cleanInputData() {
		while (!this->inputData.empty()) {
			this->inputData.push_back();
		}
	}

	void Parser::solveResult(unsigned int priority) {
		
	}

}
