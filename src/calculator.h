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
		\param std::vector<std::string> &input string vector representing the data entered to calculator.
		\param unsigned type determines the type of operation to be performed.
		\return std::string Result of calculation converted to string
	*/
	std::string solve(std::vector<std::string> &input, unsigned int type);
protected:	
	//! Getting data from class variable inputData.
	/*!
		Function for getting data from class variable inputData.
		\return std::vector<std::string> inputData.
	*/
	std::vector<std::string> &getInputData();
	
	//! Storing data to class variable inputData.
	/*!
		Function for storing data to class variable inputData.
		\param std::vector<std::string> inputData vector for storing.
	*/
	void setInputData(std::vector<std::string> inputData);
	
	//! Getting data from class variable doubleData
	/*!
		Function for getting data from class variable doubleData.
		\return std::vector<double>& doubleData Vector of doubles
	*/
	std::vector <double> &getDoubleData();
	
	//! Storing data to doubleData.
	/*!
		Function for storing data to class variable doubleData.
		\param doubleData vector for storing.
	*/
	void setDoubleData(std::vector<double> doubleData);
private:
	//! Converting data from string vector to double vector.
	/*!
		Function for converting data from string vector to double vector.
		\return converted vector of doubles, doubleData.
	*/
	std::vector<double> &convertToDouble();
	
	//! Deleting certain data from string vector.
	/*!
		Function for deleting certain data from string vector inputData.
		 \param start starting position for deleting.
		 \param amount number of elements to be deleted.
	*/
	void deleteItemsFromInputDataVector(unsigned int start, unsigned int amount);
	
	//! Deleting all the data from strin vector.
	/*!
		Function for deleting all the data from string vector inputData.
	*/
	void cleanInputData();
	
	//! Deleting all the data from double vector.
	/*!
		Function for deleting all the data from double vector doubleData.
	*/
	void cleanDoubleData();
	
	//! Calculation of mathematic operations based on priority.
	/*!
		Function for calculating mathematic operations based on operators priority.
		\param priority priority of operation.
	*/
	void solveResult(int priority);
	
	std::vector<std::string> inputData; /*!< String vector representing data entered into calculator. */ 
	
	std::vector<double> doubleData; /*!< Double vector representing data entered into calculator as double. */
};
#endif //IVS2_PARSER_H
