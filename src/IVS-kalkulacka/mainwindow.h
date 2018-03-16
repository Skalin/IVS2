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
    void on_numberSeven_clicked();

    void on_allClear_clicked();

    void on_deleteButton_clicked();

    void on_numberEight_clicked();

    void on_numberNine_clicked();

    void on_numberFour_clicked();

    void on_numberFive_clicked();

    void on_numberSix_clicked();

    void on_numberOne_clicked();

    void on_numberTwo_clicked();

    void on_numberThree_clicked();

    void on_numberZero_clicked();

    void on_decimalPoint_clicked();

    void on_sqrtSign_clicked();

    void on_sqrSign_clicked();

    void on_factorialSign_clicked();

    void on_divideSign_clicked();

    void on_multiplySign_clicked();

    void on_minusSign_clicked();

    void on_plusSign_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
