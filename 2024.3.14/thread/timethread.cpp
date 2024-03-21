#include "timethread.h"
#include <QTime>
#include <QTimer>
#include <QDebug>


TimeThread::TimeThread(QObject *parent) : QThread(parent)
{

}



/*重写run()*/
void TimeThread::run(){
//    mutex = 0;
    QTime *time = new QTime;
    static int i = 0;
    qDebug()<<"mutex = 0;"<<mutex;

    i = i%65535;

    while(1){
        msleep(1);
        if(mutex){
            while(1){
               if(!mutex){
                   break;
               }
               sleep(1);
            }
        }
        emit updatedata(time->currentTime()
                .toString("HH:mm:ss:zzz"),i++);

    }
}

void TimeThread::updateMutex(){
    qDebug()<<"mutex = "<<mutex;
    mutex++;
    if(mutex >= 2){
        mutex = 0;
    }
}
