//! Implementation of functions for user interface logic
/*! \file mainwindow.cpp
 *
 */

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
    //input restrictons
    tmp.remove(QRegExp("[^0123456789./*+!√^-,]"));

    //seg fault
    if (tmp.size()>1){
        //+-
        if (tmp.at(tmp.size()-2) == '+' && tmp.at(tmp.size()-1) == '-'){
            on_deleteButton_clicked();
            on_deleteButton_clicked();
            ui->resultArea->setText(ui->resultArea->text()+ "-");
        }
        //-+
        if (tmp.at(tmp.size()-2) == '-' && tmp.at(tmp.size()-1) == '+'){
            on_deleteButton_clicked();
            on_deleteButton_clicked();
            ui->resultArea->setText(ui->resultArea->text()+ "+");
        }
        //--
        if (tmp.at(tmp.size()-2) == '-' && tmp.at(tmp.size()-1) == '-'){
            on_deleteButton_clicked();
        }
        //++
        if (tmp.at(tmp.size()-2) == '+' && tmp.at(tmp.size()-1) == '+'){
            on_deleteButton_clicked();
        }

    }

}
std::vector<std::string> MainWindow::splitInputString(std::string input, char splitter){
    std::vector<std::string> listKeywords = {};
    std::string tmp = "";
    for (unsigned int i=0; i<input.length();i++){
        if (input.at(i) == splitter){
            tmp.erase(std::remove(tmp.begin(), tmp.end(), ','), tmp.end());
            if (tmp.empty() == false){
                listKeywords.push_back(tmp);
                tmp = "";
            }
        }else{
            tmp = tmp + input[i];
        }

    }
    //push last member but only if not ','
    if (tmp.empty() == false && tmp.find(',') == std::string::npos){
        listKeywords.push_back(tmp);
    }
    return listKeywords;
}


void MainWindow::on_equalSign_clicked()
{
    QString tmp;
    tmp = ui->resultArea->text();
    std::vector<std::string> afterSpliting{};

    //prepare for spliting
    tmp.replace("+"," + ");
    tmp.replace("-"," - ");
    tmp.replace("*"," * ");
    tmp.replace("/"," / ");
    tmp.replace("+"," + ");
    tmp.replace("√"," √ ");
    tmp.replace("^"," ^ ");
    tmp.replace("!"," ! ");

     //debug
     qDebug() << tmp << endl;

     afterSpliting = splitInputString(tmp.toStdString(),' ');
     //debug
     for(auto &i: afterSpliting)
         qDebug() << QString::fromStdString(i) << endl;

    //placeholder
   // ui->resultArea->setText(calculation(tmp.toStdString()));
}

void MainWindow::on_profiling_clicked()
{
    QString tmp;
    tmp = ui->resultArea->text();
    std::vector<std::string> afterSpliting = {};

    //debug
    qDebug() << tmp << endl;

    //std::string tmp2 = tmp.toStdString();
    afterSpliting = splitInputString(tmp.toStdString(),',');
    //debug
    for(auto &i: afterSpliting)
        qDebug() << QString::fromStdString(i) << endl;

    //placeholder
   // ui->resultArea->setText(profiling(tmp.toStdString()));
}

void MainWindow::on_commaButton_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ ",");
}
