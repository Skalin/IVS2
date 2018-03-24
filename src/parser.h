//
// Created by Dominik on 22-Mar-18.
//

#ifndef IVS2_PARSER_H
#define IVS2_PARSER_H

#include "calc.h"

class Parser : public advancedMath {
public:
	std::string solve(std::vector<std::string> &input, unsigned int type);
protected:
	std::vector <std::string> getInputData();
	void setInputData(std::vector<std::string> &inputData);
private:
	void cleanInputData();
	void solveResult(int priority);
	std::vector <std::double> convertToDouble(std::vector<std::string> &inputData);
	
	std::vector <std::string> &inputData;
};
#endif //IVS2_PARSER_H
