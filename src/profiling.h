#include "calc.h"

#ifndef IVS2_PROFILING_H
#define IVS2_PROFILING_H

//! Class for profiling.
/*!
	Class for profiling according to sample standard deviation.
*/
class Profiling : public Math {
public:
	double deviation(std::vector <double> *arrayOfDoubles);
protected:
private:
};

#endif //IVS2_PROFILING_H
