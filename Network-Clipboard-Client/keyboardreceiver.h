#ifndef KEYBOARDRECEIVER_H
#define KEYBOARDRECEIVER_H

#include <QObject>
#include <windows.h>
#include <iostream>

class KeyboardReceiver : public QObject
{
    Q_OBJECT
public:
    explicit KeyboardReceiver(QObject *parent = 0);
    void readKeys();

signals:

public slots:
};

#endif // KEYBOARDRECEIVER_H
