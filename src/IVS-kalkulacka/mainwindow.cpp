#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->resultArea->setInputMask("9999999");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_numberSeven_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "7");
}


void MainWindow::on_allClear_clicked()
{
    ui->resultArea->setText("");
}


void MainWindow::on_deleteButton_clicked()
{
    QString tmp;
    tmp = ui->resultArea->text();
    tmp.resize(tmp.size()-1);
    ui->resultArea->setText(tmp);
}

void MainWindow::on_numberEight_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "8");
}

void MainWindow::on_numberNine_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "9");
}

void MainWindow::on_numberFour_clicked()
{
   ui->resultArea->setText(ui->resultArea->text()+ "4");
}

void MainWindow::on_numberFive_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "5");
}

void MainWindow::on_numberSix_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "6");
}

void MainWindow::on_numberOne_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "1");
}

void MainWindow::on_numberTwo_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "2");
}

void MainWindow::on_numberThree_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "3");
}

void MainWindow::on_numberZero_clicked()
{
     ui->resultArea->setText(ui->resultArea->text()+ "0");
}

void MainWindow::on_decimalPoint_clicked()
{
     ui->resultArea->setText(ui->resultArea->text()+ ".");
}

void MainWindow::on_sqrtSign_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "√");
}

void MainWindow::on_sqrSign_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "^");
}

void MainWindow::on_factorialSign_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "!");
}

void MainWindow::on_divideSign_clicked()
{
     ui->resultArea->setText(ui->resultArea->text()+ "/");
}

void MainWindow::on_multiplySign_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ "*");
}

void MainWindow::on_minusSign_clicked()
{
     ui->resultArea->setText(ui->resultArea->text()+ "-");
}

void MainWindow::on_plusSign_clicked()
{
     ui->resultArea->setText(ui->resultArea->text()+ "+");
}

/*@brief forbids invalid characters in input*/
void MainWindow::on_resultArea_textChanged(const QString &arg1)
{
    QString tmp;
    tmp = arg1;
    tmp.remove(QRegExp("[^0123456789./*-+!√^]"));
    ui->resultArea->setText(tmp);
}
