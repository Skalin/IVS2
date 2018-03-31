/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionKalkulacka;
    QAction *actionProfilling;
    QAction *actionNapoveda;
    QWidget *centralWidget;
    QPushButton *numberZero;
    QPushButton *numberOne;
    QPushButton *numberFour;
    QPushButton *numberSeven;
    QPushButton *numberEight;
    QPushButton *decimalPoint;
    QPushButton *numberTwo;
    QPushButton *numberFive;
    QPushButton *numberNine;
    QPushButton *equalSign;
    QPushButton *numberThree;
    QPushButton *numberSix;
    QPushButton *multiplySign;
    QPushButton *divideSign;
    QPushButton *plusSign;
    QPushButton *minusSign;
    QPushButton *sqrtSign;
    QPushButton *factorialSign;
    QPushButton *sqrSign;
    QPushButton *allClear;
    QPushButton *deleteButton;
    QLineEdit *resultArea;
    QPushButton *commaButton;
    QPushButton *profiling;
    QPushButton *helpButton;
    QPushButton *average;
    QPushButton *sum;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(369, 407);
        MainWindow->setMinimumSize(QSize(369, 407));
        MainWindow->setMaximumSize(QSize(369, 407));
        actionKalkulacka = new QAction(MainWindow);
        actionKalkulacka->setObjectName(QStringLiteral("actionKalkulacka"));
        actionProfilling = new QAction(MainWindow);
        actionProfilling->setObjectName(QStringLiteral("actionProfilling"));
        actionNapoveda = new QAction(MainWindow);
        actionNapoveda->setObjectName(QStringLiteral("actionNapoveda"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        numberZero = new QPushButton(centralWidget);
        numberZero->setObjectName(QStringLiteral("numberZero"));
        numberZero->setGeometry(QRect(9, 354, 81, 31));
        numberZero->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        numberOne = new QPushButton(centralWidget);
        numberOne->setObjectName(QStringLiteral("numberOne"));
        numberOne->setGeometry(QRect(9, 319, 81, 29));
        numberOne->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        numberFour = new QPushButton(centralWidget);
        numberFour->setObjectName(QStringLiteral("numberFour"));
        numberFour->setGeometry(QRect(10, 280, 81, 29));
        numberFour->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        numberSeven = new QPushButton(centralWidget);
        numberSeven->setObjectName(QStringLiteral("numberSeven"));
        numberSeven->setGeometry(QRect(10, 240, 81, 29));
        numberSeven->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        numberEight = new QPushButton(centralWidget);
        numberEight->setObjectName(QStringLiteral("numberEight"));
        numberEight->setGeometry(QRect(100, 240, 80, 29));
        numberEight->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        decimalPoint = new QPushButton(centralWidget);
        decimalPoint->setObjectName(QStringLiteral("decimalPoint"));
        decimalPoint->setGeometry(QRect(99, 354, 80, 31));
        decimalPoint->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        numberTwo = new QPushButton(centralWidget);
        numberTwo->setObjectName(QStringLiteral("numberTwo"));
        numberTwo->setGeometry(QRect(99, 319, 80, 29));
        numberTwo->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        numberFive = new QPushButton(centralWidget);
        numberFive->setObjectName(QStringLiteral("numberFive"));
        numberFive->setGeometry(QRect(100, 280, 80, 29));
        numberFive->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        numberNine = new QPushButton(centralWidget);
        numberNine->setObjectName(QStringLiteral("numberNine"));
        numberNine->setGeometry(QRect(190, 240, 80, 29));
        numberNine->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        equalSign = new QPushButton(centralWidget);
        equalSign->setObjectName(QStringLiteral("equalSign"));
        equalSign->setGeometry(QRect(189, 354, 81, 31));
        equalSign->setStyleSheet(QLatin1String("background-color: rgb(115, 210, 22);\n"
"color: rgb(0, 0, 0);"));
        equalSign->setIconSize(QSize(16, 16));
        numberThree = new QPushButton(centralWidget);
        numberThree->setObjectName(QStringLiteral("numberThree"));
        numberThree->setGeometry(QRect(189, 319, 80, 29));
        numberThree->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        numberSix = new QPushButton(centralWidget);
        numberSix->setObjectName(QStringLiteral("numberSix"));
        numberSix->setGeometry(QRect(190, 280, 80, 29));
        numberSix->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        multiplySign = new QPushButton(centralWidget);
        multiplySign->setObjectName(QStringLiteral("multiplySign"));
        multiplySign->setGeometry(QRect(281, 281, 80, 29));
        multiplySign->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(0, 0, 0);"));
        divideSign = new QPushButton(centralWidget);
        divideSign->setObjectName(QStringLiteral("divideSign"));
        divideSign->setGeometry(QRect(281, 241, 80, 29));
        divideSign->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(0, 0, 0);"));
        plusSign = new QPushButton(centralWidget);
        plusSign->setObjectName(QStringLiteral("plusSign"));
        plusSign->setGeometry(QRect(280, 355, 80, 29));
        plusSign->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(0, 0, 0);"));
        minusSign = new QPushButton(centralWidget);
        minusSign->setObjectName(QStringLiteral("minusSign"));
        minusSign->setGeometry(QRect(280, 320, 80, 29));
        minusSign->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(0, 0, 0);"));
        sqrtSign = new QPushButton(centralWidget);
        sqrtSign->setObjectName(QStringLiteral("sqrtSign"));
        sqrtSign->setGeometry(QRect(10, 200, 80, 29));
        sqrtSign->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(0, 0, 0);"));
        factorialSign = new QPushButton(centralWidget);
        factorialSign->setObjectName(QStringLiteral("factorialSign"));
        factorialSign->setGeometry(QRect(190, 200, 80, 29));
        factorialSign->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(0, 0, 0);"));
        sqrSign = new QPushButton(centralWidget);
        sqrSign->setObjectName(QStringLiteral("sqrSign"));
        sqrSign->setGeometry(QRect(100, 200, 80, 29));
        sqrSign->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(0, 0, 0);"));
        allClear = new QPushButton(centralWidget);
        allClear->setObjectName(QStringLiteral("allClear"));
        allClear->setGeometry(QRect(280, 200, 80, 29));
        allClear->setAutoFillBackground(false);
        allClear->setStyleSheet(QLatin1String("background-color: rgb(204, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(280, 160, 80, 29));
        deleteButton->setStyleSheet(QLatin1String("background-color: rgb(204, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        resultArea = new QLineEdit(centralWidget);
        resultArea->setObjectName(QStringLiteral("resultArea"));
        resultArea->setGeometry(QRect(20, 20, 331, 81));
        resultArea->setStyleSheet(QStringLiteral("font: 20pt \"Cantarell\";"));
        commaButton = new QPushButton(centralWidget);
        commaButton->setObjectName(QStringLiteral("commaButton"));
        commaButton->setGeometry(QRect(10, 160, 51, 29));
        commaButton->setStyleSheet(QLatin1String("\n"
"color: rgb(0, 0, 0);"));
        profiling = new QPushButton(centralWidget);
        profiling->setObjectName(QStringLiteral("profiling"));
        profiling->setGeometry(QRect(70, 160, 61, 29));
        profiling->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(115, 210, 22);"));
        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setGeometry(QRect(280, 120, 80, 29));
        helpButton->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        average = new QPushButton(centralWidget);
        average->setObjectName(QStringLiteral("average"));
        average->setGeometry(QRect(140, 160, 61, 29));
        average->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(115, 210, 22);"));
        sum = new QPushButton(centralWidget);
        sum->setObjectName(QStringLiteral("sum"));
        sum->setGeometry(QRect(210, 160, 61, 29));
        sum->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(115, 210, 22);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionKalkulacka->setText(QApplication::translate("MainWindow", "Kalkula\304\215ka", 0));
        actionProfilling->setText(QApplication::translate("MainWindow", "Profilling", 0));
        actionNapoveda->setText(QApplication::translate("MainWindow", "N\303\241pov\304\233da", 0));
        numberZero->setText(QApplication::translate("MainWindow", "0", 0));
        numberOne->setText(QApplication::translate("MainWindow", "1", 0));
        numberFour->setText(QApplication::translate("MainWindow", "4", 0));
        numberSeven->setText(QApplication::translate("MainWindow", "7", 0));
        numberEight->setText(QApplication::translate("MainWindow", "8", 0));
        decimalPoint->setText(QApplication::translate("MainWindow", ".", 0));
        numberTwo->setText(QApplication::translate("MainWindow", "2", 0));
        numberFive->setText(QApplication::translate("MainWindow", "5", 0));
        numberNine->setText(QApplication::translate("MainWindow", "9", 0));
        equalSign->setText(QApplication::translate("MainWindow", "=", 0));
        numberThree->setText(QApplication::translate("MainWindow", "3", 0));
        numberSix->setText(QApplication::translate("MainWindow", "6", 0));
        multiplySign->setText(QApplication::translate("MainWindow", "*", 0));
        divideSign->setText(QApplication::translate("MainWindow", "/", 0));
        plusSign->setText(QApplication::translate("MainWindow", "+", 0));
        minusSign->setText(QApplication::translate("MainWindow", "-", 0));
        sqrtSign->setText(QApplication::translate("MainWindow", "\342\210\232", 0));
        factorialSign->setText(QApplication::translate("MainWindow", "!", 0));
        sqrSign->setText(QApplication::translate("MainWindow", "^", 0));
        allClear->setText(QApplication::translate("MainWindow", "AC", 0));
        deleteButton->setText(QApplication::translate("MainWindow", "DEL", 0));
        commaButton->setText(QApplication::translate("MainWindow", ",", 0));
        profiling->setText(QApplication::translate("MainWindow", "\317\203", 0));
        helpButton->setText(QApplication::translate("MainWindow", "N\303\241pov\304\233da", 0));
        average->setText(QApplication::translate("MainWindow", "\316\274", 0));
        sum->setText(QApplication::translate("MainWindow", "\316\243", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
