//! Header file containing declaration of profiling functionality for Profiler functionality
/*! \file profilingApplication.cpp
 *
 */


#ifndef IVS2_PROFILINGAPPLICATION_H
#define IVS2_PROFILINGAPPLICATION_H

#include "profiling.h"

class ProfilingApplication : public Profiling {
public:
	ProfilingApplication(std::string input);
	~ProfilingApplication();
	std::string getInput();
	std::vector<double>& getDoubleVector();
	void convertStringToDoubleVector();
protected:
private:
	void setInput(std::string input);
	std::string input;
	std::vector<double> vectorOfDoubles;
	void setDoubleVector(std::vector<double> vectorOfDoubles);
};

#endif //IVS2_PROFILINGAPPLICATION_H
