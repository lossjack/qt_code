#include "filemainwindow.h"
#include "ui_filemainwindow.h"

FileMainWindow::FileMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FileMainWindow)
{
    ui->setupUi(this);
}

FileMainWindow::~FileMainWindow()
{
    delete ui;
}

