#ifndef HTTP_H
#define HTTP_H

#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QEventLoop>
#include <QObject>

class Http
{
public:
    Http();

    static bool  post_syns(QString url,QMap<QString,QString>header,QByteArray& requestData,QByteArray&replyData);
};

#endif // HTTP_H
