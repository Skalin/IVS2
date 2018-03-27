#ifndef IVS2_BASIC_H
#define IVS2_BASIC_H

#include <iostream>

//! Class of help functions.
/*!
	Class of help functions which are used accross the whole project.
*/
class Basic {
public:
	//! Printout of unexpected error.
	/*!
		Function for printing out of unexpected error.
	*/
	void printError();
	
	//! Printout of specific error.
	/*!
		Function for printing out of specific error.
		\param error text of specific error.
	*/
	void printError(std::string error);
};


#endif //IVS2_BASIC_H
