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
std::vector<std::string> MainWindow::splitInputString(std::string input, char splitter, std::string mode){
    std::vector<std::string> listKeywords = {};
    if (!mode.empty()){
        listKeywords.push_back(mode);
    }
    std::string tmp = "";
    for (unsigned int i=0; i<input.length();i++){
        if (input.at(i) == splitter){
            tmp.erase(std::remove(tmp.begin(), tmp.end(), ','), tmp.end());
            if (!tmp.empty()){
                listKeywords.push_back(tmp);
                tmp = "";
            }
        }else{
            tmp = tmp + input[i];
        }

    }
    //push last member but only if not ','
    if (!tmp.empty() && tmp.find(',') == std::string::npos){
        listKeywords.push_back(tmp);
    }
    return listKeywords;
}

bool MainWindow::checkInput(QString input, int mode){
    std::string tmp = input.toStdString();
    QMessageBox msgBox;
    QString last = input.at(input.size()-1);

    //general condition
    if (last == "+" || last == "-" || last =="/" || last == "*" || last == "√" || last == "^"){
        msgBox.setText("Špatný vstup!\n"
                       "vstup nemůže být zakončen operátorem\n"
                       "př. 5+5");
        msgBox.exec();
        return false;
    }
    //mode specific condition
    if (mode == 1){
        if (tmp.find(',') == std::string::npos){
            msgBox.setText("Špatný vstup!\n"
                           "členove se oddělují čárkamy\n"
                           "př. 5,5,5");
            msgBox.exec();
            return false;
        }
    }else{

    }

    return true;
}


void MainWindow::on_equalSign_clicked()
{
    QString tmp;
    Calculator Calculator1;
    tmp = ui->resultArea->text();
    std::vector<std::string> afterSpliting = {};

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

     if (!checkInput(tmp,0)){
         qDebug() << "test" << endl;
         return;
     }

     afterSpliting = splitInputString(tmp.toStdString(),' ',"");
     //debug
     for(auto &i: afterSpliting)
         qDebug() << QString::fromStdString(i) << endl;

    //placeholder
     qDebug() << "tady" << endl;
     qDebug() << QString::fromStdString(Calculator1.solve(afterSpliting,0)) << endl;
     ui->resultArea->setText(QString::fromStdString(Calculator1.solve(afterSpliting,0)));
}

void MainWindow::on_profiling_clicked()
{
    QString tmp;
    Calculator Calculator1;
    tmp = ui->resultArea->text();
    std::vector<std::string> afterSpliting = {};

    //debug
    qDebug() << tmp << endl;

    if (!checkInput(tmp,1)){
        qDebug() << "test" << endl;
        return;
    }

    afterSpliting = splitInputString(tmp.toStdString(),',',"DEV");
    //debug
    for(auto &i: afterSpliting)
        qDebug() << QString::fromStdString(i) << endl;

    //placeholder
   ui->resultArea->setText(QString::fromStdString(Calculator1.solve(afterSpliting,1)));
}

void MainWindow::on_commaButton_clicked()
{
    ui->resultArea->setText(ui->resultArea->text()+ ",");
}

void MainWindow::on_average_clicked()
{
    QString tmp;
    Calculator Calculator1;
    tmp = ui->resultArea->text();
    std::vector<std::string> afterSpliting = {};

    //debug
    qDebug() << tmp << endl;

    if (!checkInput(tmp,1)){
        qDebug() << "test" << endl;
        return;
    }

    afterSpliting = splitInputString(tmp.toStdString(),',',"AVG");
    //debug
    for(auto &i: afterSpliting)
        qDebug() << QString::fromStdString(i) << endl;

    //placeholder
   ui->resultArea->setText(QString::fromStdString(Calculator1.solve(afterSpliting,1)));
}

void MainWindow::on_sum_clicked()
{
    QString tmp;
    Calculator Calculator1;
    tmp = ui->resultArea->text();
    std::vector<std::string> afterSpliting = {};

    //debug
    qDebug() << tmp << endl;

    if (!checkInput(tmp,1)){
        qDebug() << "test" << endl;
        return;
    }

    afterSpliting = splitInputString(tmp.toStdString(),',',"SUM");
    //debug
    for(auto &i: afterSpliting)
        qDebug() << QString::fromStdString(i) << endl;

    //placeholder
   ui->resultArea->setText(QString::fromStdString(Calculator1.solve(afterSpliting,1)));
}

void MainWindow::on_helpButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setTextFormat(Qt::RichText);
    msgBox.setText("Vysvětlení jednotlivých tlačítek    ");
    msgBox.setInformativeText("<b>DEL</b>    smaže poslední znak ze vstupu<br>"
                              "<b>AC</b>    vymaže celý vstup<br>"
                              "<br>"
                              "Pro následující operace se členové odělují čárkou (,)<br>"
                              "<br>"
                              "<b>σ</b>     funkce pro profiling<br>"
                              "<b>μ</b>     funkce pro průměr<br>"
                              "<b>Σ</b>     funkce pro sumu (součet všech prvků)<br>");
    msgBox.setDetailedText("Příklady použití jednotlivých funkcí\n"
                           "μ\n"
                           "5,5,5   => 5\n"
                           "1,2,3   => 2\n"
                           "Σ\n"
                           "5,5,5   = 15\n"
                           "5,-5,-2 = -2\n"
                           "σ\n"
                           "TODO");
    msgBox.exec();

}
