#ifndef FILEMAINWINDOW_H
#define FILEMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FileMainWindow; }
QT_END_NAMESPACE

class FileMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    FileMainWindow(QWidget *parent = nullptr);
    ~FileMainWindow();

private:
    Ui::FileMainWindow *ui;
};
#endif // FILEMAINWINDOW_H
