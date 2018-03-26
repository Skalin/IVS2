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
	
	//! Calculation of problem.
	/*!
		Function for calculation of given problem.
		Manages the overall logic of the solution
		\param &input string vector representing the data entered to calculator.
		\param type determines the type of operation to be performed.
		\return Result of calculation.
	*/
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
