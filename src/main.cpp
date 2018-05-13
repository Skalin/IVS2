//! Main file
/*! \file main.cpp
 * 	\brief Main file
 *
 */

#include "mainwindow.h"

int main(int argc, char *argv[]) {
	
	QApplication a(argc, argv);
	MainWindow w;
    a.setStyle("fusion");
	w.show();
	
	return a.exec();
}
