#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <iostream>

#include "keyboardreceiver.h"
#include <clipboardcontroller.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    ClipboardController *c = ClipboardController::get_instance();

//    std::cout<<"aufgerufen"<<std::endl;
//    KeyboardReceiver *kr = new KeyboardReceiver();
//    kr->readKeys();

    return app.exec();
}
