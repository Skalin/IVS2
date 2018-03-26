#ifndef IVS2_PARSER_H
#define IVS2_PARSER_H

#include "profiling.h"

//! Class representing calculator.
/*!
	Class inheriting classes Basic, Math and Profiling
	\sa Basic, Math, Profiling
*/
class Calculator : public Profiling {
public:
	//! Constructor.
	/*!
		Function for initializing class variables.
	*/
	Calculator();
	std::string solve(std::vector<std::string> &input, unsigned int type);
protected:
	std::vector<std::string> &getInputData();
	void setInputData(std::vector<std::string> inputData);
	std::vector <double> &getDoubleData();
	void setDoubleData(std::vector<double> doubleData);
private:
	std::vector<double> &convertToDouble();
	void deleteItemsFromVector(unsigned int start, unsigned int amount);
	void cleanInputData();
	void cleanDoubleData();
	void solveResult(int priority);
	std::vector<std::string> inputData;
	std::vector<double> doubleData;
};
#endif //IVS2_PARSER_H
