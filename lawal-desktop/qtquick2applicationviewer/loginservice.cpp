#include "loginservice.h"
#include <QDebug>

LoginService::LoginService(QObject *parent) :
    QObject(parent)
{
}

void LoginService::print(QString info)
{
    qDebug() << info << endl;
}
