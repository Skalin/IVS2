#include "calc.h"

#ifndef IVS2_PROFILING_H
#define IVS2_PROFILING_H

//! Class for profiling.
/*!
	Class for profiling according to sample standard deviation.
*/
class Profiling : public Math {
public:
	//! Standard deviation function
	/*!
		The function is responsible for the calculation of sample standard deviation
		using functions from Math library.
		\param arrayOfDoubles vector of given values for calculation.
		\return Result of calculation of sample standard deviation.
		\sa Math
	*/
	double deviation(std::vector <double> *arrayOfDoubles);
protected:
private:
};

#endif //IVS2_PROFILING_H
