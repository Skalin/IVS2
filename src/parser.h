//
// Created by Dominik on 22-Mar-18.
//

#ifndef IVS2_PARSER_H
#define IVS2_PARSER_H

#include "calc.h"

class Parser {
public:
protected:
	std::vector <std::string> getInputData();
	void setInputData(std::vector<std::string> &inputData);
	void solve(std::vector<std::string> &input);
private:
	void cleanInputData();
	void solveResult(unsigned int priority);
	
	std::vector <std::string> &inputData;
};
#endif //IVS2_PARSER_H
