#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_numberSeven_clicked()
{
    ui->resultArea->moveCursor(QTextCursor::End);
    ui->resultArea->insertPlainText("7");
    ui->resultArea->moveCursor(QTextCursor::End);
}
