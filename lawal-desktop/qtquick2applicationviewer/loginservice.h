#ifndef LOGINSERVICE_H
#define LOGINSERVICE_H

#include <QObject>

class LoginService : public QObject
{
    Q_OBJECT
public:
    explicit LoginService(QObject *parent = 0);


    void print(QString info);

signals:

public slots:

};

#endif // LOGINSERVICE_H
