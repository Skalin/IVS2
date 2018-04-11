//! Header file containing declaration of profiling functionality for Profiler functionality
/*! \file profilingApplication.cpp
 *
 */


#ifndef IVS2_PROFILINGAPPLICATION_H
#define IVS2_PROFILINGAPPLICATION_H

#include "profiling.h"

//! ProfilingApplication class
/*!
	Class inheriting classes Basic, Math and Profiling
	\sa Basic, Math, Profiling
*/
class ProfilingApplication : public Profiling {
public:

	//! Constructor
	/*!
	 *  	\param input input string of numbers
		\brief Function for initializing class
	*/
	ProfilingApplication(std::string input);

	//! Destructor
	/*!
	 	\brief Function for destructing and cleaning the class
	 */
	~ProfilingApplication();

	//! \brief Getter for input
	//! Getting data from class variable input
	/*!
		Function for getting data from class variable input
		\return input string input of program
	*/
	std::string getInput();

	//! \brief Getter for vectorOfDoubles
	//! Getting data from class variable vectorOfDoubles
	/*!
		Function for getting data from class variable vectorOfDoubles
		\return vectorOfDoubles Vector of doubles
	*/
	std::vector<double>& getDoubleVector();

	//! \brief Converts input string to vector of doubles
	//! Converting data from string to double vector
	/*!
		Function for converting data from string to double vector
	    \warning Do not touch this function, comparison in cycle with find should contain npos, but it does only work with -1
		\return converted vector of doubles, vectorOfDoubles
	*/
	void convertStringToDoubleVector();
protected:
private:

	//! Setter fot input
	//! Storing data to class variable input
	/*!
		Function for storing data to class variable input
		\param input string for storing input from standard input
	*/
	void setInput(std::string input);

	std::string input; /*!< String representing data entered into ProfilingApplication */
	std::vector<double> vectorOfDoubles; /*!< Double vector representing data entered into ProfilingApplication converted from string */

	//! Setter fot vectorOfDoubles
	//! Storing data to class variable vectorOfDoubles
	/*!
		Function for storing data to class variable vectorOfDoubles
		\param vectorOfDoubles vector for storing double numbers converted from string
	*/
	void setDoubleVector(std::vector<double> vectorOfDoubles);
};

#endif //IVS2_PROFILINGAPPLICATION_H
