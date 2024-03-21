#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QDebug>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this,SIGNAL(signal_btn3(int)),this,SLOT(btn3_slot(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn1_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"1";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn2_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"2";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn3_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"3";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn4_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"4";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn5_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"5";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn6_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"6";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn7_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"7";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn8_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"8";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn9_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"9";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn0_clicked()
{
    QString str =  ui->dataShow->text();
    QString data = str+"0";
    ui->dataShow->setText(data);
}

void MainWindow::on_btn_chop_clicked()
{
    QString str =  ui->dataShow->text();
    str.chop(1);//删除最后一个字符

    ui->dataShow->setText(str);
}

void MainWindow::btn3_slot(){
    qDebug()<<"btn-----------";
    emit sendDataSignal(10086);//发送信号
}
