#include "widget.h"
#include "ui_widget.h"

#include <QDialog>
#include <QFileDialog>
#include <QFile>
#include <QDebug>

#include <QFontDialog>
#include <QFont>

#include <QColorDialog>
#include <QColor>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btn_open_clicked()
{
    // 打开文件夹选择对话框
    QString folderPath = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                      "/home",
                                                      tr("*.png *.xpm *.jpg *.c *.cpp *.txt"));
    this->fileName = folderPath;

    // 如果用户选择了文件夹，则输出文件夹路径
    if (!folderPath.isEmpty()) {
        QFile file(folderPath);
        bool ret = file.open(QIODevice::ReadWrite);
        if(!ret){
            qDebug()<<"打开文件失败";
            return;
        }

        QByteArray data = file.readAll();
        qDebug()<<data;
        ui->textEdit->setText(data);
        file.close();
    } else {
        qDebug() << "未选择任何文件夹";
    }

}

void Widget::on_btn_setfont_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(
                  &ok, QFont("Helvetica [Cronyx]", 10), this);
    if (ok) {
        // the user clicked OK and font is set to the font the user selected
        qDebug()<<font;
        ui->textEdit->setFont(font);
    } else {
        // the user canceled the dialog; font is set to the initial
        // value, in this case Helvetica [Cronyx], 10
        qDebug()<<"font set fail";
    }
}

void Widget::on_btn_setback_clicked()
{
    QColor qcolor = QColorDialog::getColor();
    qDebug()<<qcolor;
//    ui->textEdit->setTextBackgroundColor(qcolor);
    ui->textEdit->setTextColor(qcolor);
}

void Widget::on_btn_close_clicked()
{
    ui->textEdit->setText("");
    qDebug()<<"清空数据";
}

void Widget::on_btn_save_clicked()
{
    QString str = ui->textEdit->toPlainText();

    QFile file(this->fileName);

    bool ret = file.open(QIODevice::ReadWrite);
    if(!ret){
        qDebug()<<"打开文件失败";
        return;
    }

    qint64 count = file.write(str.toUtf8());
    qDebug()<<count;

    file.close();

}
