#ifndef IVS2_PARSER_H
#define IVS2_PARSER_H

#include "profiling.h"

class Parser : public Profiling {
public:
	Parser();
	std::string solve(std::vector<std::string> &input, unsigned int type);
protected:
	std::vector<std::string> &getInputData();
	void setInputData(std::vector<std::string> inputData);
private:
	std::vector<double> &convertToDouble();
	void cleanInputData();
	void solveResult(int priority);
	std::vector<std::string> inputData;
};
#endif //IVS2_PARSER_H
