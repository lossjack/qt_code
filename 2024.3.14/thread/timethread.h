#ifndef TIMETHREAD_H
#define TIMETHREAD_H

#include <QObject>
#include <QWidget>
#include <QThread>
#include <QDebug>

class TimeThread : public QThread
{
    Q_OBJECT
public:
    explicit TimeThread(QObject *parent = nullptr);

    void run() override;

    int mutex;
signals:
    void updatedata(QString dataTime,int num);

public slots:
    void updateMutex();

};

#endif // TIMETHREAD_H
