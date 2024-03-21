#include "filewidget.h"
#include "ui_filewidget.h"
#include <QFileDialog>
#include <QDebug>

fileWidget::fileWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::fileWidget)
{
    ui->setupUi(this);
}

fileWidget::~fileWidget()
{
    delete ui;
}


void fileWidget::on_btn_open_clicked()
{
    qDebug()<<"1111111111111";
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                     "./",
                                                     tr("Images (*.png *.xpm *.jpg *.c *.cpp *.txt)"));
    qDebug()<<fileName;


      if (fileName.isEmpty()) {
          // No file was selected
          return ;
      } else {
          // Use fileName and fileContent
      }

      QFileDialog::getOpenFileContent("Images (*.png *.xpm *.jpg)",  fileContentReady);
}
