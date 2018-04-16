//! Tests for math library
/*! \file tests.cpp
 *
 */

#include <iostream>
#include <math.h>
#include <vector>
#include "calc.h"

using namespace std;


string delimiter = "==============================================";


int testScenario(Math Calculator1, string testType, vector<double> expectedResults, vector<double> results, unsigned int amountOfComparisonTests) {
	unsigned int passedTests = 0;
	unsigned int testScenario = 0;
	unsigned int failedTests = 0;


	if (results.size() != expectedResults.size()) {
		cout << delimiter << endl;
		cout << testType << endl;
		cout << "Amount of expected results does not match amount of real results!" << endl;
		cout << delimiter << endl;
		return -1;
	} else {
		for (unsigned long i = 0; i < results.size(); i++) {
			testScenario++;
			if (testScenario <= amountOfComparisonTests) {
				if (results.at(i) == expectedResults.at(i)) {
					passedTests++;
				} else {
					if (failedTests == 0) {
						cout << testType << endl;
					}
					failedTests++;
					cout << delimiter << endl;
					cout << "Test case no.: " << testScenario << endl;
					cout << "Expected output: " << expectedResults.at(i) << endl;
					cout << "Given output: " << results.at(i) << endl;
					cout << delimiter << endl;
				}
			} else {
				if (results.at(i) <= expectedResults.at(i)) {
					passedTests++;
				} else {
					if (failedTests == 0) {
						cout << testType << endl;
					}
					failedTests++;
					cout << delimiter << endl;
					cout << "Test case no.: " << testScenario << endl;
					cout << "Expected output: " << expectedResults.at(i) << endl;
					cout << "Given output: " << results.at(i) << endl;
					cout << delimiter << endl;
				}
			}
		}
	}
	return passedTests;

}

int basic_addition(Math Calculator1) {
    unsigned int amountOfComparisonTests = 10;
    string testType = "ADDITION TESTS INFORMATION";

    vector <double> expectedResults = {
            3,
            3,
            3,
            -1,
            -1,
            -1,
            -3,
            2e+18,
            0,
            10000000000
    };
    vector <double> results = {
            Calculator1.addition(1.0,2),
            Calculator1.addition(1.0,2.0),
            Calculator1.addition(1,2),
            Calculator1.addition(1.0,-2.0),
            Calculator1.addition(1.0,-2),
            Calculator1.addition(1,-2),
            Calculator1.addition(-1, -2),
            Calculator1.addition(999999999999999999, 999999999999999999),
            Calculator1.addition(-999999999999999999, 999999999999999999),
            Calculator1.addition(1, 9999999999)
    };

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int basic_subtraction(Math Calculator1) {
    unsigned int amountOfComparisonTests = 10;
    string testType = "SUBTRACTION TESTS INFORMATION";

    vector <double> expectedResults = {
            -1,
            -1,
            -1,
            3.0,
            3,
            3,
            1,
            0,
            -2e+18,
            -9999999998
    };
    vector <double> results = {
            Calculator1.subtraction(1.0, 2),
            Calculator1.subtraction(1.0, 2.0),
            Calculator1.subtraction(1, 2),
            Calculator1.subtraction(1.0, -2.0),
            Calculator1.subtraction(1.0, -2),
            Calculator1.subtraction(1, -2),
            Calculator1.subtraction(-1, -2),
            Calculator1.subtraction(999999999999999999, 999999999999999999),
            Calculator1.subtraction(-999999999999999999, 999999999999999999),
            Calculator1.subtraction(1, 9999999999)
    };

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int basic_multiplication(Math Calculator1) {
    unsigned int amountOfComparisonTests = 11;
    string testType = "MULTIPLICATION TESTS INFORMATION";

    vector <double> expectedResults = {
            0,
            2.0,
            2,
            -2,
            -2.0,
            4,
            20.0,
            20,
            1e+36,
            -1e+36,
            9999999999.0,
            fabs(Calculator1.multiplication(2.33, 3.33))+fabs(7.7589),
            fabs(Calculator1.multiplication(2.33, 3.33))+fabs(7.7589),
            fabs(Calculator1.multiplication(2.35163, 665.6533))+fabs(1565.37026988),
            fabs(Calculator1.multiplication(-2.35163, -665.6533))+fabs(1565.37026988),
            fabs(Calculator1.multiplication(2.35163, -665.6533))+fabs(1565.37026988)
    };
    vector <double> results = {
            Calculator1.multiplication(0.0, 2.0),
            Calculator1.multiplication(1.0, 2.0),
            Calculator1.multiplication(1, 2),
            Calculator1.multiplication(1, -2),
            Calculator1.multiplication(1.0, -2.0),
            Calculator1.multiplication(-1.0, -4.0),
            Calculator1.multiplication(-10, -2),
            Calculator1.multiplication(-10, -2),
            Calculator1.multiplication(999999999999999999.0, 999999999999999999.0),
            Calculator1.multiplication(-999999999999999999.0, 999999999999999999.0),
            Calculator1.multiplication(1.0, 9999999999.0),
            fabs(Calculator1.multiplication(2.33, 3.33) - 7.7589),
            fabs(Calculator1.multiplication(2.33, -3.33) + 7.7589),
            fabs(Calculator1.multiplication(2.35163, 665.6533) - 1565.37026988),
            fabs(Calculator1.multiplication(-2.35163, -665.6533) - 1565.37026988),
            fabs(Calculator1.multiplication(2.35163, -665.6533) + 1565.37026988)
    };

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

unsigned int basic_division(Math Calculator1) {
	unsigned int amountOfComparisonTests = 10;
    string testType = "DIVISION TESTS INFORMATION";

    vector <double> expectedResults = {
            0.0,
            0.5,
            0.5,
            0.5,
            -0.5,
            -0.5,
            -0.5,
            0.5,
            1,
            -1,
            fabs(Calculator1.division(1, 9999999999))+fabs(1e-10),
            fabs(Calculator1.division(5.156, 2.651))+fabs(1.94493),
            fabs(Calculator1.division(-5.156, 2.651))+fabs(1.94493)
    };
    vector <double> results = {
            Calculator1.division(0, 5.651),
            Calculator1.division(1.0, 2),
            Calculator1.division(1.0, 2.0),
            Calculator1.division(1, 2),
            Calculator1.division(1.0, -2.0),
            Calculator1.division(1.0, -2.0),
            Calculator1.division(1, -2),
            Calculator1.division(-1, -2),
            Calculator1.division(999999999999999999, 999999999999999999),
            Calculator1.division(-999999999999999999, 999999999999999999),
            fabs(Calculator1.division(1, 9999999999) + 1e-10),
            fabs(Calculator1.division(5.156, 2.651) + 1.94493),
            fabs(Calculator1.division(-5.156, 2.651) - 1.94493)
    };

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int basic_powerOf(Math Calculator1) {
    unsigned int amountOfComparisonTests = 13;
    string testType = "POWER OF TESTS INFORMATION";

    vector <double> expectedResults = {
            0,
            1,
            25,
            32,
            1,
            543543,
            1,
            -1,
            -1,
            1,
            25,
            -125,
            0,
            fabs(Calculator1.powerOf(99, 99))+fabs(3.6973e+197),
            fabs(Calculator1.powerOf(-99, 99))+fabs(3.6973e+197),
            fabs(Calculator1.powerOf(5.2, 2))+fabs(27.04),
            fabs(Calculator1.powerOf(-5.2, 2))+fabs(27.04),
            fabs(Calculator1.powerOf(-5.2, 2))+fabs(27.6255),
            fabs(Calculator1.powerOf(-5.2, 3))+fabs(145.1998),
            fabs(Calculator1.powerOf(-5.2, 0))+fabs(1)
    };
    vector <double> results = {
            Calculator1.powerOf(0, 5),
            Calculator1.powerOf(5, 0),
            Calculator1.powerOf(5, 2),
            Calculator1.powerOf(2, 5),
            Calculator1.powerOf(1, 5543453),
            Calculator1.powerOf(543543, 1),
            Calculator1.powerOf(0, 0),
            Calculator1.powerOf(-1, 5),
            Calculator1.powerOf(-1, 5555),
            Calculator1.powerOf(-1, 4),
            Calculator1.powerOf(-5, 2),
            Calculator1.powerOf(-5, 3),
            Calculator1.powerOf(-0, 99),
            fabs(Calculator1.powerOf(99, 99) - 3.6973e+197),
            fabs(Calculator1.powerOf(-99, 99) + 3.6973e+197),
            fabs(Calculator1.powerOf(5.2, 2) - 27.04),
            fabs(Calculator1.powerOf(-5.2, 2) + 27.04),
            fabs(Calculator1.powerOf(-5.256, 2) - 27.6255),
            fabs(Calculator1.powerOf(-5.256, 3) + 145.1998),
            fabs(Calculator1.powerOf(-5.2, 0) - 1)
    };

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int basic_factorial(Math Calculator1) {
    unsigned int amountOfComparisonTests = 4;
    string testType = "FACTORIAL TESTS INFORMATION";

    vector <double> expectedResults = {
            1,
            1,
            120,
            3628800,
            fabs(Calculator1.factorial(52))+fabs(8.06582e+67)
    };
    vector <double> results = {
            Calculator1.factorial(0),
            Calculator1.factorial(1),
            Calculator1.factorial(5),
            Calculator1.factorial(10),
            fabs(Calculator1.factorial(52) - 8.06582e+67)
    };

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int basic_root(Math Calculator1) {
	unsigned int amountOfComparisonTests = 1;
	string testType = "ROOT TESTS INFORMATION";

	vector <double> expectedResults = {
			0,
			fabs(Calculator1.root(2.255,2))+fabs(1.5017),
			fabs(Calculator1.root(25,2))+fabs(5),
			fabs(Calculator1.root(0.3165,2))+fabs(0.5626),
			fabs(Calculator1.root(616165.3165,2))+fabs(784.962),
	};
	vector <double> results = {
			Calculator1.root(0,2),
			fabs(Calculator1.root(2.255,2) - 1.5017),
			fabs(Calculator1.root(25,2) - 5),
			fabs(Calculator1.root(0.3165,2) - 0.5626),
			fabs(Calculator1.root(616165.3165,2) - 784.962)
	};

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int basic_sum(Math Calculator1) {
	unsigned int amountOfComparisonTests = 10;
	string testType = "SUM TESTS INFORMATION";

	vector<double> arrayOfDoubles = {};
	vector<double> arrayOfDoubles2 = {};

	vector <double> expectedResults = {
			68,
			-62,
			0,
			1,
			Calculator1.sum(&(arrayOfDoubles2 = {60, 5, 3})),
			3,
			-1,
			0,
			0,
			Calculator1.sum(&(arrayOfDoubles2 = {3, 5, 60}), 1),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1, 2, -65.6})))+fabs(62.6),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1.2, 2.651, -65.6})))+fabs(61.749),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1})))+fabs(1),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1, 2.3, -65.6}), 1))+fabs(1.2),
			fabs(Calculator1.sum(&(arrayOfDoubles = {-1.2, 2.651, -65.6}), 1))+fabs(1.2),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1}), 9))+fabs(0.5)
	};

	vector <double> results = {
			Calculator1.sum(&(arrayOfDoubles = {1, 2, 65})),
			Calculator1.sum(&(arrayOfDoubles = {1, 2, -65})),
			Calculator1.sum(&(arrayOfDoubles = {0, 0, -0})),
			Calculator1.sum(&(arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1})),
			Calculator1.sum(&(arrayOfDoubles = {1, 2, 65})),
			Calculator1.sum(&(arrayOfDoubles = {1, 2, 65}), 2),
			Calculator1.sum(&(arrayOfDoubles = {1, -2, -65}), 2),
			Calculator1.sum(&(arrayOfDoubles = {0, 0, -0}), 2),
			Calculator1.sum(&(arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1}), 8),
			Calculator1.sum(&(arrayOfDoubles = {1, 2, 65}), 2),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1, 2, -65.6})) + 62.6),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1.2, 2.651, -65.6})) + 61.749),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1})) - 1),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1, 2.3, -65.6}), 2) - 3.3),
			fabs(Calculator1.sum(&(arrayOfDoubles = {-1.2, 2.651, -65.6}), 1) + 1.2),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1}), 9) - 0.5)
	};

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int basic_average(Math Calculator1) {
	unsigned int amountOfComparisonTests = 3;
	string testType = "AVERAGE TESTS INFORMATION";

	vector<double> arrayOfDoubles = {};
	vector<double> arrayOfDoubles2 = {};

	vector <double> expectedResults = {
			0,
			0,
			0,
			fabs(Calculator1.sum(&(arrayOfDoubles = {1, 2, 65})))+fabs(22.6667),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1, 2, -65})))+fabs(20.6667),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1, 2, -65.6, 2})))+fabs(15.15),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1.2, 2.651, -65.6})))+fabs(20.583),
			fabs(Calculator1.sum(&(arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1})))+fabs(0.037),
			fabs(Calculator1.average(&(arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1})))+fabs(0.037),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, 2, 65}), 2))+fabs(1.5),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, -2, -65}), 2))+fabs(1.5),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, 2.3, -65.6}), 2))+fabs(1.65),
			fabs(Calculator1.average(&(arrayOfDoubles = {-1.2, 2.651, -65.6}), 1))+fabs(1.2),
			fabs(Calculator1.average(&(arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1}), 9))+fabs(0.0556)
	};

	vector <double> results = {
			Calculator1.average(&(arrayOfDoubles = {0, 0, -0})),
			Calculator1.average(&(arrayOfDoubles = {0, 0, -0}), 2),
			Calculator1.average(&(arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1}), 8),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, 2, 65})) - 22.6667),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, 2, -65})) + 20.6667),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, 2, -65.6, 2})) + 15.15),
			fabs(Calculator1.average(&(arrayOfDoubles = {1.2, 2.651, -65.6})) + 20.583),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1})) - 0.037),
			fabs(Calculator1.average(&(arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1})) - 0.037),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, 2, 65}), 2) - 1.5),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, -2, -65}), 2) + 1.5),
			fabs(Calculator1.average(&(arrayOfDoubles = {1, 2.3, -65.6}), 2) - 1.65),
			fabs(Calculator1.average(&(arrayOfDoubles = {-1.2, 2.651, -65.6}), 1) + 1.2),
			fabs(Calculator1.average(&(arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1}), 9) - 0.0556),
	};

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int basic_deviation(Math Calculator1) {
	return 1;
}

int advanced(Math Calculator1) {
	unsigned int amountOfComparisonTests = 1;
	string testType = "AVERAGE TESTS INFORMATION";

	vector<double> arrayOfDoubles = {};

	vector <double> expectedResults = {
			Calculator1.multiplication(4, Calculator1.multiplication(3, Calculator1.multiplication(2, 1))),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.addition(1.0, -2), Calculator1.addition(1.0, 2.6), Calculator1.addition(-8, 2)})))+fabs(0.4),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.addition(1.0, 2.6), Calculator1.subtraction(-8, 2)})))+fabs(0.4),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.subtraction(-8, 2)})))+fabs(1.4),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)})))+fabs(4.6),
			fabs(Calculator1.root(Calculator1.powerOf(5, 2), 2))+fabs(5),
			fabs(Calculator1.average(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)}), 2))+fabs(3),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)}), 1))+fabs(3),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, Calculator1.powerOf(2, 3)), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)})))+fabs(10.6),
			fabs(Calculator1.average(&(arrayOfDoubles = {Calculator1.addition(1.0, Calculator1.powerOf(2, 3)), Calculator1.subtraction(1.0, Calculator1.factorial(3)), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)})))+fabs(2.6)
	};

	vector <double> results = {
			Calculator1.factorial(4),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.addition(1.0, -2), Calculator1.addition(1.0, 2.6), Calculator1.addition(-8, 2)})) + 0.4),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.addition(1.0, 2.6), Calculator1.subtraction(-8, 2)})) + 0.4),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.subtraction(-8, 2)})) + 1.4),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)})) - 4.6),
			fabs(Calculator1.root(Calculator1.powerOf(5, 2), 2) - 5),
			fabs(Calculator1.average(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)}), 2) - 3),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)}), 1) - 3),
			fabs(Calculator1.sum(&(arrayOfDoubles = {Calculator1.addition(1.0, Calculator1.powerOf(2, 3)), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)})) - 10.6),
			fabs(Calculator1.average(&(arrayOfDoubles = {Calculator1.addition(1.0, Calculator1.powerOf(2, 3)), Calculator1.subtraction(1.0, Calculator1.factorial(3)), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)})) - 2.6)

	};

	return testScenario(Calculator1, testType, expectedResults, results, amountOfComparisonTests);
}

int main() {
    Math Calculator1;

	cout << delimiter << endl;
    cout << "ADDITION RESULTS: " + to_string(basic_addition(Calculator1)) + "/10 PASSED" << endl;
	cout << delimiter << endl;
    cout << "SUBTRACTION RESULTS: " + to_string(basic_subtraction(Calculator1)) + "/10 PASSED" << endl;
	cout << delimiter << endl;
    cout << "MULTIPLICATION RESULTS: " + to_string(basic_multiplication(Calculator1)) + "/16 PASSED" << endl;
	cout << delimiter << endl;
    cout << "DIVISION RESULTS: " + to_string(basic_division(Calculator1)) + "/13 PASSED" << endl;
	cout << delimiter << endl;
    cout << "POWER RESULTS: " + to_string(basic_powerOf(Calculator1)) + "/20 PASSED" << endl;
	cout << delimiter << endl;
    cout << "FACTORIAL RESULTS: " + to_string(basic_factorial(Calculator1)) + "/5 PASSED" << endl;
	cout << delimiter << endl;
    cout << "ROOT RESULTS: " + to_string(basic_root(Calculator1)) + "/5 PASSED" << endl;
	cout << delimiter << endl;
    cout << "SUM RESULTS: " + to_string(basic_sum(Calculator1)) + "/16 PASSED" << endl;
	cout << delimiter << endl;
	cout << "AVERAGE RESULTS: " + to_string(basic_average(Calculator1)) + "/14 PASSED" << endl;
	cout << delimiter << endl;
    cout << "ADVANCED TESTS RESULTS: " + to_string(advanced(Calculator1)) + "/10 PASSED" << endl;
	cout << delimiter << endl;
	cout << "DEVIATION RESULTS: " + to_string(basic_deviation(Calculator1)) + "NOT YET IMPLEMENTED" << endl;
	cout << delimiter << endl;

    return 0;
}
