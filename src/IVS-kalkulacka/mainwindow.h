#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
