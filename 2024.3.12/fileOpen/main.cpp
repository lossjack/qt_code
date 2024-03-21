#include "filewidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fileWidget w;
    w.show();
    return a.exec();
}
