#include "http.h"

#include<QUrl>

Http::Http()
{

}

bool Http::post_syns(QString url, QMap<QString,QString>header, QByteArray &requestData, QByteArray &replyData)
{
    QNetworkAccessManager manager;//发送请求的动作

    QNetworkRequest request;//请求的内容（包含url和头）
    request.setUrl(url);

    QMapIterator<QString,QString> it(header);
    while(it.hasNext())
    {
        it.next();
        request.setRawHeader(it.key().toLatin1(),it.value().toLatin1());
    }

    QNetworkReply *reply =  manager.post(request,requestData);
    QEventLoop l;

    //类似于阻塞的效果，等
    QObject::connect(reply,&QNetworkReply::finished,&l,&QEventLoop::quit);

//    l.exec();

    if(reply != nullptr && reply->error() == QNetworkReply::NoError)
    {
        replyData  = reply->readAll();
        return true;
    }
    else
        return false;
}


inline size_t onWriteData(void * buffer, size_t size, size_t nmemb, void * userp)
{
    std::string * str = dynamic_cast<std::string *>((std::string *)userp);
    str->append((char *)buffer, size * nmemb);
    return nmemb;
}
