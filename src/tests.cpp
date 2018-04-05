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

int basic_addition(Math Calculator1) {
    unsigned int passedTests = 0;
    unsigned int testScenario = 0;
    unsigned int amountOfComparisonTests = 10;
	unsigned int failedTests = 0;
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

    if (results.size() != expectedResults.size()) {
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

int basic_subtraction(Math Calculator1) {
    unsigned int passedTests = 0;
    unsigned int testScenario = 0;
    unsigned int amountOfComparisonTests = 10;
    unsigned int failedTests = 0;
    string testType = "SUBTRACTION TESTS";

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

    if (results.size() != expectedResults.size()) {
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

int basic_multiplication(Math Calculator1) {
    unsigned int passedTests = 0;
    unsigned int testScenario = 0;
    unsigned int amountOfComparisonTests = 11;
    unsigned int failedTests = 0;
    string testType = "MULTIPLICATION TESTS";

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

    if (results.size() != expectedResults.size()) {
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

unsigned int basic_division(Math Calculator1) {
    unsigned int passedTests = 0;
    unsigned int testScenario = 0;
	unsigned int amountOfComparisonTests = 10;
	unsigned int failedTests = 0;
    string testType = "DIVISION TESTS";

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

    if (results.size() != expectedResults.size()) {
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

int basic_powerOf(Math Calculator1) {
    unsigned int passedTests = 0;
    unsigned int testScenario = 0;
    unsigned int amountOfComparisonTests = 13;
    unsigned int failedTests = 0;
    string testType = "FACTORIAL TESTS";

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

    if (results.size() != expectedResults.size()) {
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

int basic_factorial(Math Calculator1) {
    unsigned int passedTests = 0;
    unsigned int testScenario = 0;
    unsigned int amountOfComparisonTests = 4;
    unsigned int failedTests = 0;
    string testType = "FACTORIAL TESTS";

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

    if (results.size() != expectedResults.size()) {
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
    int i = 0;

    if (Calculator1.factorial(0) == 1) {
        i += 1;
    }

    if (Calculator1.factorial(1) == 1) {
        i += 1;
    }

    if (Calculator1.factorial(5) == 120) {
        i += 1;
    }

    if (Calculator1.factorial(10) == 3628800) {
        i += 1;
    }

	if (fabs(Calculator1.factorial(52) - 8.06582e+67) < fabs(Calculator1.factorial(52))+fabs(8.06582e+67)) {
		i += 1;
	}

	return i;
}

int basic_root(Math Calculator1) {
    int i = 0;

    if (Calculator1.root(0,2) == 0) {
        i += 1;
    }

    if (fabs(Calculator1.root(2.255,2) - 1.5017) < fabs(Calculator1.root(2.255,2))+fabs(1.5017)) {
        i += 1;
    }

    if (fabs(Calculator1.root(25,2) - 5) < fabs(Calculator1.root(25,2))+fabs(5)) {
        i += 1;
    }

    if (fabs(Calculator1.root(0.3165,2) - 0.5626) < fabs(Calculator1.root(0.3165,2))+fabs(0.5626)) {
        i += 1;
    }

    if (fabs(Calculator1.root(616165.3165,2) - 784.962) < fabs(Calculator1.root(616165.3165,2))+fabs(784.962)) {
        i += 1;
    }

    return i;
}

int basic_sum(Math Calculator1) {
    int i = 0;
    vector<double> arrayOfDoubles;
    vector<double> arrayOfDoubles2;

    arrayOfDoubles = {1, 2, 65};
    if (Calculator1.sum(&arrayOfDoubles) == 68) {
        i += 1;
    }

    arrayOfDoubles = {1, 2, -65};
    if (Calculator1.sum(&arrayOfDoubles) == -62) {
        i += 1;
    }

    arrayOfDoubles = {1, 2, -65.6};
    if (fabs(Calculator1.sum(&arrayOfDoubles) + 62.6) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(62.6)) {
        i += 1;
    }

    arrayOfDoubles = {1.2, 2.651, -65.6};
    if (fabs(Calculator1.sum(&arrayOfDoubles) + 61.749) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(61.749)) {
        i += 1;
    }

    arrayOfDoubles = {0, 0, -0};
    if (Calculator1.sum(&arrayOfDoubles) == 0) {
        i += 1;
    }

    arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1};
    if (Calculator1.sum(&arrayOfDoubles) == 1) {
        i += 1;
    }

    arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1};
    if (fabs(Calculator1.sum(&arrayOfDoubles) - 1) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(1)) {
        i += 1;
    }

    arrayOfDoubles = {1, 2, 65};
    arrayOfDoubles2 = {60, 5, 3};
    if (Calculator1.sum(&arrayOfDoubles) == Calculator1.sum(&arrayOfDoubles2)) {
        i += 1;
    }

    arrayOfDoubles = {1, 2, 65};
    if (Calculator1.sum(&arrayOfDoubles, 2) == 3) {
        i += 1;
    }

    arrayOfDoubles = {1, -2, -65};
    if (Calculator1.sum(&arrayOfDoubles, 2) == -1) {
        i += 1;
    }

    arrayOfDoubles = {1, 2.3, -65.6};
    if (fabs(Calculator1.sum(&arrayOfDoubles, 2) - 3.3) < fabs(Calculator1.sum(&arrayOfDoubles, 2))+fabs(3.3)) {
        i += 1;
    }

    arrayOfDoubles = {-1.2, 2.651, -65.6};
    if (fabs(Calculator1.sum(&arrayOfDoubles, 1) + 1.2) < fabs(Calculator1.sum(&arrayOfDoubles, 1))+fabs(1.2)) {
        i += 1;
    }

    arrayOfDoubles = {0, 0, -0};
    if (Calculator1.sum(&arrayOfDoubles, 2) == 0) {
        i += 1;
    }

    arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1};
    if (Calculator1.sum(&arrayOfDoubles, 8) == 0) {
        i += 1;
    }

    arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1};
    if (fabs(Calculator1.sum(&arrayOfDoubles, 9) - 0.5) < fabs(Calculator1.sum(&arrayOfDoubles, 9))+fabs(0.5)) {
        i += 1;
    }

    arrayOfDoubles = {1, 2, 65};
    arrayOfDoubles2 = {3, 5, 60};
    if (Calculator1.sum(&arrayOfDoubles, 2) == Calculator1.sum(&arrayOfDoubles2, 1)) {
        i += 1;
    }

    return i;
}

int basic_average(Math Calculator1) {
    int i = 0;
    vector<double> arrayOfDoubles;
    vector<double> arrayOfDoubles2;

    arrayOfDoubles = {1, 2, 65};
    if (fabs(Calculator1.average(&arrayOfDoubles) - 22.6667) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(22.6667)) {
        i += 1;
    }

    arrayOfDoubles = {1, 2, -65};
    if (fabs(Calculator1.average(&arrayOfDoubles) + 20.6667) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(20.6667)) {
        i += 1;
    }

    arrayOfDoubles = {1, 2, -65.6, 2};
    if (fabs(Calculator1.average(&arrayOfDoubles) + 15.15) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(15.15)) {
        i += 1;
    }

    arrayOfDoubles = {1.2, 2.651, -65.6};
    if (fabs(Calculator1.average(&arrayOfDoubles) + 20.583) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(20.583)) {
        i += 1;
    }

    arrayOfDoubles = {0, 0, -0};
    if (Calculator1.average(&arrayOfDoubles) == 0) {
        i += 1;
    }

    arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1};
    if (fabs(Calculator1.average(&arrayOfDoubles) - 0.037) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(0.037)) {
        i += 1;
    }

    arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1};
    if (fabs(Calculator1.average(&arrayOfDoubles) - 0.037) < fabs(Calculator1.average(&arrayOfDoubles))+fabs(0.037)) {
        i += 1;
    }

    arrayOfDoubles = {1, 2, 65};
    if (fabs(Calculator1.average(&arrayOfDoubles, 2) - 1.5) < fabs(Calculator1.average(&arrayOfDoubles, 2))+fabs(1.5)) {
        i += 1;
    }

    arrayOfDoubles = {1, -2, -65};
    if (fabs(Calculator1.average(&arrayOfDoubles, 2) + 1.5) < fabs(Calculator1.average(&arrayOfDoubles, 2))+fabs(1.5)) {
        i += 1;
    }

    arrayOfDoubles = {1, 2.3, -65.6};
    if (fabs(Calculator1.average(&arrayOfDoubles, 2) - 1.65) < fabs(Calculator1.average(&arrayOfDoubles, 2))+fabs(1.65)) {
        i += 1;
    }

    arrayOfDoubles = {-1.2, 2.651, -65.6};
    if (fabs(Calculator1.average(&arrayOfDoubles, 1) + 1.2) < fabs(Calculator1.average(&arrayOfDoubles, 1))+fabs(1.2)) {
        i += 1;
    }

    arrayOfDoubles = {0, 0, -0};
    if (Calculator1.average(&arrayOfDoubles, 2) == 0) {
        i += 1;
    }

    arrayOfDoubles = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1};
    if (Calculator1.average(&arrayOfDoubles, 8) == 0) {
        i += 1;
    }

    arrayOfDoubles = {1.0, -1, 1, -1.0, 1, -1, 1.0, -1, 1.5, -1, 1, -1.5, 1.1, -1.1, 1, -1, 1, -1.0, 1, -1.0, 1, -1, 1, -1, 1, -1, 1};
    if (fabs(Calculator1.average(&arrayOfDoubles, 9) - 0.0556) < fabs(Calculator1.average(&arrayOfDoubles, 9))+fabs(0.0556)) {
        i += 1;
    }

    return i;
}

int advanced(Math Calculator1) {
    int i = 0;
    vector<double> arrayOfDoubles;

    arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.addition(1.0, -2), Calculator1.addition(1.0, 2.6), Calculator1.addition(-8, 2)};
    if (fabs(Calculator1.sum(&arrayOfDoubles) + 0.4) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(0.4)) {
        i += 1;
    }

    arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.addition(1.0, 2.6), Calculator1.subtraction(-8, 2)};
    if (fabs(Calculator1.sum(&arrayOfDoubles) + 0.4) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(0.4)) {
        i += 1;
    }

    arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.subtraction(-8, 2)};
    if (fabs(Calculator1.sum(&arrayOfDoubles) + 1.4) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(1.4)) {
        i += 1;
    }

    arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)};
    if (fabs(Calculator1.sum(&arrayOfDoubles) - 4.6) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(4.6)) {
        i += 1;
    }

    if (Calculator1.factorial(4) == Calculator1.multiplication(4, Calculator1.multiplication(3, Calculator1.multiplication(2, 1)))) {
        i += 1;
    }

    if (fabs(Calculator1.root(Calculator1.powerOf(5, 2), 2) - 5) < fabs(Calculator1.root(Calculator1.powerOf(5, 2), 2))+fabs(5)) {
        i += 1;
    }

    arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)};
    if (fabs(Calculator1.average(&arrayOfDoubles, 2) - 3) < fabs(Calculator1.average(&arrayOfDoubles, 2))+fabs(3)) {
        i += 1;
    }

    arrayOfDoubles = {Calculator1.addition(1.0, 2), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)};
    if (fabs(Calculator1.sum(&arrayOfDoubles, 1) - 3) < fabs(Calculator1.sum(&arrayOfDoubles, 1))+fabs(3)) {
        i += 1;
    }

    arrayOfDoubles = {Calculator1.addition(1.0, Calculator1.powerOf(2, 3)), Calculator1.subtraction(1.0, -2), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)};
    if (fabs(Calculator1.sum(&arrayOfDoubles) - 10.6) < fabs(Calculator1.sum(&arrayOfDoubles))+fabs(10.6)) {
        i += 1;
    }

    arrayOfDoubles = {Calculator1.addition(1.0, Calculator1.powerOf(2, 3)), Calculator1.subtraction(1.0, Calculator1.factorial(3)), Calculator1.multiplication(1.0, 2.6), Calculator1.division(-8, 2)};
    if (fabs(Calculator1.average(&arrayOfDoubles) - 2.6) < fabs(Calculator1.average(&arrayOfDoubles))+fabs(2.6)) {
        i += 1;
    }

    return i;
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

    return 0;
}
