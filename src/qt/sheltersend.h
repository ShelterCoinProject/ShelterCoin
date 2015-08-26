#ifndef SHELTSEND_H
#define SHELTSEND_H

#include <QObject>
#include "httpsocket.h"

class sheltersend : public QObject
{
    Q_OBJECT
public:
    explicit sheltersend(QObject *parent = 0);
    QString fromAddress;
    QString destinationAddress;
    QString amount;
    QString getShelteredAddress(); //returns the sheltered address assuming object variables set correctly.
    bool useProxy;
    QString proxyAddress;
    int proxyPort;
signals:

public slots:

private:
    httpsocket *socket;
};

#endif // SHELTSEND_H
