#include "realqqwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    realqqWidget w;
    w.show();
    return a.exec();
}
