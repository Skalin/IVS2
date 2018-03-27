//! Header file containing the declaration of calculator logic functions
/*! \file calculator.h
 *
 */

#ifndef IVS2_PARSER_H
#define IVS2_PARSER_H

#include "profiling.h"

//! Calculator class
/*!
	Class inheriting classes Basic, Math and Profiling
	\sa Basic, Math, Profiling
*/
class Calculator : public Profiling {
public:
	
	//! Constructor
	/*!
		\brief Function for initializing class variables
	*/
	Calculator();
	
	//! Calculation of problem
	/*!
		\brief Function for calculation of given problem
		Manages the overall logic of the solution
		\param input string vector representing the data entered to calculator
		\param type determines the type of operation to be performed
		\return Result of calculation converted to string
	*/
	std::string solve(std::vector<std::string>& input, unsigned int type);
	
protected:	
	//! \brief Getter for inputData
	//! Getting data from class variable inputData
	/*!
		Function for getting data from class variable inputData
		\return inputData
	*/
	std::vector<std::string>& getInputData();
	
	//! \brief Setter for inputData
	//! Storing data to class variable inputData
	/*!
		Function for storing data to class variable inputData
		\param inputData vector for storing
	*/
	void setInputData(std::vector<std::string> inputData);
	
	//! \brief Getter for doubleData
	//! Getting data from class variable doubleData
	/*!
		Function for getting data from class variable doubleData
		\return doubleData Vector of doubles
	*/
	std::vector <double>& getDoubleData();
	//! Setter fot doubleData
	//! Storing data to class variable doubleData
	/*!
		Function for storing data to class variable doubleData
		\param doubleData vector for storing
	*/
	void setDoubleData(std::vector<double> doubleData);
private:
	
	//! \brief Converts vector of strings to vector of doubles
	//! Converting data from string vector to double vector
	/*!
		Function for converting data from string vector to double vector
		\return converted vector of doubles, doubleData
	*/
	std::vector<double>& convertToDouble();
	
	//! \brief Deletes certain amount of items from vector
	//! Deleting certain data from string vector
	/*!
		Function for deleting certain data from string vector inputData
		 \param start starting position for deleting
		 \param amount number of elements to be deleted
	*/
	void deleteItemsFromInputDataVector(unsigned int start, unsigned int amount);
	
	//! \brief Initialiazes inputData vector
	//! Deleting all the data from string vector
	/*!
		Function for deleting all the data from string vector inputData
	*/
	void cleanInputData();
	
	//! \brief Initialiazes doubleData vector
	//! Deleting all the data from double vector
	/*!
		Function for deleting all the data from double vector doubleData
	*/
	void cleanDoubleData();
	
	//! \brief Solves partial results based on priority
	//! Calculation of math operations based on priority
	/*!
		Function for calculating math operations based on operators priority
		\param priority priority of operation
	*/
	void solveResult(int priority);
	
	std::vector<std::string> inputData; /*!< String vector representing data entered into calculator */
	
	std::vector<double> doubleData; /*!< Double vector representing data entered into calculator as double */
};
#endif //IVS2_PARSER_H
