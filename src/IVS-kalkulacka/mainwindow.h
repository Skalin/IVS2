#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <iostream>
#include <vector>
#include <algorithm>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /*@brief appends '7' to input*/
    void on_numberSeven_clicked();

    /*@brief clears everything from input*/
    void on_allClear_clicked();

    /*@brief deletes last character from input*/
    void on_deleteButton_clicked();

    /*@brief appends '8' to input*/
    void on_numberEight_clicked();

    /*@brief appends '9' to input*/
    void on_numberNine_clicked();

    /*@brief appends '4' to input*/
    void on_numberFour_clicked();

    /*@brief appends '5' to input*/
    void on_numberFive_clicked();

    /*@brief appends '6' to input*/
    void on_numberSix_clicked();

    /*@brief appends '1' to input*/
    void on_numberOne_clicked();

    /*@brief appends '2' to input*/
    void on_numberTwo_clicked();

    /*@brief appends '3' to input*/
    void on_numberThree_clicked();

    /*@brief appends '0' to input*/
    void on_numberZero_clicked();

    /*@brief appends '.' to input*/
    void on_decimalPoint_clicked();

    /*@brief appends '√' to input*/
    void on_sqrtSign_clicked();

    /*@brief appends '^' to input*/
    void on_sqrSign_clicked();

    /*@brief appends '!' to input*/
    void on_factorialSign_clicked();

    /*@brief appends '/' to input*/
    void on_divideSign_clicked();

    /*@brief appends '*' to input*/
    void on_multiplySign_clicked();

    /*@brief appends 'i' to input*/
    void on_minusSign_clicked();

    /*@brief appends '+' to input*/
    void on_plusSign_clicked();

    /*@brief forbids invalid characters in input*/
    void on_resultArea_textChanged(const QString &arg1);


    /*@brief converts string input into vector
    * @param input input string that needs to be split
    * @param splitter character to split the input with
    * @param mode tag for solve function
    * @return vector of strings
    */
   std::vector<std::string> splitInputString(std::string input, char splitter, std::string mode);


    /*@brief prints out result of calculation*/
    void on_equalSign_clicked();

    /*@brief prints out result of profiling*/
    void on_profiling_clicked();

    /*@brief appends ',' to input*/
    void on_commaButton_clicked();

    void on_average_clicked();

    void on_sum_clicked();

    void on_helpButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
