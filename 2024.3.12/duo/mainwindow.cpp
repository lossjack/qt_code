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

void MainWindow::log_account_slot(QString str){
    ui->lineEdit->setText(str);
}

void MainWindow::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
