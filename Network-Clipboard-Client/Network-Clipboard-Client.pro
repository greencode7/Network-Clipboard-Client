TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    KeySimulator.cpp \
    keyboardreceiver.cpp \
    clipboardcontroller.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    KeySimulator.h \
    keyboardreceiver.h \
    clipboardcontroller.h
