//! Main file
/*! \file main.cpp
 *
 */

#include "mainwindow.h"

int main(int argc, char *argv[]) {
	/*
	Calculator Calculator1;
	
	std::cout << Calculator1.addition(1.0, 2.0) << std::endl;
	std::cout << Calculator1.subtraction(5, 2) << std::endl;
	std::cout << Calculator1.multiplication(5, 2) << std::endl;
	std::cout << Calculator1.division(6, 2) << std::endl;
	std::cout << Calculator1.powerOf(5, 2) << std::endl;
	std::cout << Calculator1.factorial(5) << std::endl;
	std::cout << Calculator1.root(81, 4) << std::endl;
	std::vector<std::string> StringVector(6);
	StringVector.at(0) = "SUM";
	StringVector.at(1) = "1";
	StringVector.at(2) = "1";
	StringVector.at(3) = "1";
	StringVector.at(4) = "1";
	StringVector.at(5) = "1";
	std::vector<double> DoubleVector (5);
	DoubleVector.at(0) = 10;
	DoubleVector.at(1) = 20;
	DoubleVector.at(2) = 30;
	DoubleVector.at(3) = 40;
	DoubleVector.at(4) = 50;
	std::cout << Calculator1.sum(&DoubleVector) << std::endl;
	std::cout << Calculator1.average(&DoubleVector) << std::endl;
	std::cout << Calculator1.deviation(&DoubleVector) << std::endl;
	std::cout << "Size of StringVector: " << StringVector.size() << std::endl;
	std::cout << Calculator1.solve(StringVector, 1) << std::endl;
	std::vector<std::string> StringVector2(8);
	StringVector2.at(0) = "10";
	StringVector2.at(1) = "+";
	StringVector2.at(2) = "3";
	StringVector2.at(3) = "*";
	StringVector2.at(4) = "2";
	StringVector2.at(5) = "-";
	StringVector2.at(6) = "3";
	StringVector2.at(7) = "!";
	std::cout << Calculator1.solve(StringVector2,0) << std::endl;
	std::vector<std::string> StringVector3(9);
	StringVector3.at(0) = "5";
	StringVector3.at(1) = "!";
	StringVector3.at(2) = "+";
	StringVector3.at(3) = "3";
	StringVector3.at(4) = "*";
	StringVector3.at(5) = "2";
	StringVector3.at(6) = "/";
	StringVector3.at(7) = "3";
	StringVector3.at(8) = "!";
	std::cout << Calculator1.solve(StringVector3,0) << std::endl;
	
	std::cout << "Sample Calculator1 source code" << std::endl;
	return 0;
	*/
	
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	
	return a.exec();
}
