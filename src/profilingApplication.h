//! Header file containing declaration of profiling functionality for Profiler functionality
/*! \file profilingApplication.cpp
 *
 */


#ifndef IVS2_PROFILINGAPPLICATION_H
#define IVS2_PROFILINGAPPLICATION_H

#include "profiling.h"

//! ProfilingApplication class
/*!
	Class inheriting classes Basic, Math and Profiling.
	\sa Basic, Math, Profiling
*/
class ProfilingApplication : public Profiling {
public:

	//! \brief Function for initializing class
	/*!
		Constructor.
	 *  	\param input input string of numbers
	*/
	ProfilingApplication(std::string input);

	//! \brief Function for destructing and cleaning the class
	/*!
	 	Destructor.
	 */
	~ProfilingApplication();

	//! \brief Getter for input
	/*!
		Function for getting data from class variable input.
		\return input of program
	*/
	std::string getInput();

	//! \brief Getter for vectorOfDoubles
	/*!
		Function for getting data from class variable vectorOfDoubles.
		\return vector of doubles, vectorOfDoubles
	*/
	std::vector<double>& getDoubleVector();

	//! \brief Converts input string to vector of doubles
	/*!
		Function for converting data from string to double vector.
	    \warning Do not touch this function, comparison in cycle with find should contain npos, but it does only work with -1
		\return converted vector of doubles, vectorOfDoubles
	*/
	void convertStringToDoubleVector();
protected:
private:

	//! \brief Setter fot input
	/*!
		Function for storing data to class variable input.
		\param input string for storing input from standard input
	*/
	void setInput(std::string input);

	std::string input; /*!< String representing data entered into ProfilingApplication */
	std::vector<double> vectorOfDoubles; /*!< Double vector representing data entered into ProfilingApplication converted from string */

	//! \brief Setter fot vectorOfDoubles
	/*!
		Function for storing data to class variable vectorOfDoubles.
		\param vectorOfDoubles vector for storing double numbers converted from string
	*/
	void setDoubleVector(std::vector<double> vectorOfDoubles);
};

#endif //IVS2_PROFILINGAPPLICATION_H
