#ifndef IVS2_PARSER_H
#define IVS2_PARSER_H

#include "profiling.h"

class Calculator : public Profiling {
public:
	Calculator();
	std::string solve(std::vector<std::string> &input, unsigned int type);
protected:
	std::vector<std::string> &getInputData();
	void setInputData(std::vector<std::string> inputData);
	std::vector <double> &getDoubleData();
private:
	std::vector<double> &convertToDouble();
	void cleanInputData();
	void solveResult(int priority);
	std::vector<std::string> inputData;
	std::vector<double> doubleData;
};
#endif //IVS2_PARSER_H
