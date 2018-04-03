//! Header file containing the declaration of class for interacting with calculator interface
/*! \file mainwindow.h
 *
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include <QKeyEvent>
#include <iostream>
#include <vector>
#include <algorithm>



#include "basic.h"
#include "calc.h"
#include "calculator.h"
#include "profiling.h"

//! User interface namespace
/*!
    Namespace for the class representing calculator.
*/
namespace Ui {
class MainWindow;
}

//! calculator interface logic class
/*!
    Class containing functions for interacting with calculator interface
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //! \brief Redefinition of constructor
    /*!
        Function for constructing the calculator.
        \param parent Defining the number of possible windows
    */
    explicit MainWindow(QWidget *parent = 0);

    //! \brief Destructor
    /*!
        Function for destroying the calculator.
    */
    ~MainWindow();

private slots:
    //! \brief Appends '7' to input
    /*!
        Function for appending '7' to input
    */
    void on_numberSeven_clicked();

    //! \brief Clears everything from input
    /*!
        Function for clearing everything from input
    */
    void on_allClear_clicked();

    //! \brief Deletes last character from input
    /*!
        Function for deleting last character from input
    */
    void on_deleteButton_clicked();

    //! \brief Appends '8' to input
    /*!
        Function for appending '8' to input
    */
    void on_numberEight_clicked();

    //! \brief Appends '9' to input
    /*!
        Function for appending '9' to input
    */
    void on_numberNine_clicked();

    //! \brief Appends '4' to input
    /*!
        Function for appending '4' to input
    */
    void on_numberFour_clicked();

    //! \brief Appends '5' to input
    /*!
        Function for appending '5' to input
    */
    void on_numberFive_clicked();

    //! \brief Appends '6' to input
    /*!
        Function for appending '6' to input
    */
    void on_numberSix_clicked();

    //! \brief Appends '1' to input
    /*!
        Function for appending '1' to input
    */
    void on_numberOne_clicked();

    //! \brief Appends '2' to input
    /*!
        Function for appending '2' to input
    */
    void on_numberTwo_clicked();

    //! \brief Appends '3' to input
    /*!
        Function for appending '3' to input
    */
    void on_numberThree_clicked();

    //! \brief Appends '0' to input
    /*!
        Function for appending '0' to input
    */
    void on_numberZero_clicked();

    //! \brief Appends '.' to input
    /*!
        Function for appending '.' to input
    */
    void on_decimalPoint_clicked();

    //! \brief Appends '√' to input
    /*!
        Function for appending '√' to input
    */
    void on_sqrtSign_clicked();

    //! \brief Appends '^' to input
    /*!
        Function for appending '^' to input
    */
    void on_sqrSign_clicked();

    //! \brief Appends '!' to input
    /*!
        Function for appending '!' to input
    */
    void on_factorialSign_clicked();

    //! \brief Appends '/' to input
    /*!
        Function for appending '/' to input
    */
    void on_divideSign_clicked();

    //! \brief Appends '*' to input
    /*!
        Function for appending '*' to input
    */
    void on_multiplySign_clicked();

    //! \brief Appends 'i' to input
    /*!
        Function for appending 'i' to input
    */
    void on_minusSign_clicked();

    //! \brief Appends '+' to input
    /*!
        Function for appending '+' to input
    */
    void on_plusSign_clicked();

    //! \brief Forbids invalid characters in input
    /*!
        Function for forbiding invalid characters in input
        \param arg1 representing input string (sequence)
    */
    void on_resultArea_textChanged(const QString &arg1);


    //! Input splitter
    /*! \brief Converts string input into vector
        \param input input string that needs to be split
        \param splitter character to split the input with
        \return vector of strings
    */
   std::vector<std::string> splitInputString(std::string input, char splitter, std::string mode);

   //! Checks if character is digit
   /*! \brief Checks if character is digit
       \param input character that is tested
       \return true if is digit, else false
   */
    bool isDigit (QString input);

    //! \brief Prints out result of calculation
    /*!
        Function for printing out the result of calculation
    */
    void on_equalSign_clicked();

    //! \brief Prints out result of profiling
    /*!
        Function for printing out the result of profiling
    */
    void on_profiling_clicked();

    //! \brief Appends ',' to input
    /*!
        Function for appending ',' to input
    */
    void on_commaButton_clicked();

    //! \brief Handles average button
    /*!
        Function for calling sum function
    */
    void on_average_clicked();

    //! \brief Handles sum button
    /*!
        Function for calling average function
    */
    void on_sum_clicked();

    //! \brief Shows help
    /*!
        Function for showing help
    */
    void on_helpButton_clicked();


    //! \brief checks input
    /*! \param input string to check
        \param mode for wich operation its checking
        \return true if input is ok
    */
    bool checkInput(QString input, int mode);

    //! \brief Keyboard key handler
    /*!
        \param event invoked event when pressed button
    */
    void keyPressEvent(QKeyEvent* event);

private:
    Ui::MainWindow *ui; /*!< Instance variable of class */
    bool debug = true; /*!< variable for showing debug log in console */
};

#endif // MAINWINDOW_H
