#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



int firstNum, secNum, result;

void MainWindow::on_btn_add_clicked()
{
    firstNum = ui ->txtFirstNum->text().toInt();
    secNum = ui ->txtSecNum->text().toInt();
    result = firstNum+secNum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_btn_sub_clicked()
{
    firstNum = ui ->txtFirstNum->text().toInt();
    secNum = ui ->txtSecNum->text().toInt();
    result = firstNum-secNum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_btn_mult_clicked()
{
    firstNum = ui ->txtFirstNum->text().toInt();
    secNum = ui ->txtSecNum->text().toInt();
    result = firstNum*secNum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_btn_div_clicked()
{
    firstNum = ui ->txtFirstNum->text().toInt();
    secNum = ui ->txtSecNum->text().toInt();
    result = firstNum/secNum;
    ui->result->setText(QString::number(result));
}

