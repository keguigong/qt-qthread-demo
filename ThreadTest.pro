#-------------------------------------------------
#
# Project created by QtCreator 2019-01-04T23:48:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ThreadTest
TEMPLATE = app
#CONFIG += console c++17

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    HelloThread.cpp \
    ThreadTest.cpp \
    MainProcess.cpp \
    SingletonTest.cpp \
    TemplateViewer.cpp \
    ScrollViewer.cpp

HEADERS += \
    HelloThread.h \
    ThreadTest.h \
    MainProcess.h \
    SingletonTest.h \
    TemplateViewer.h \
    ScrollViewer.h

FORMS += \
    TemplateViewer.ui \
    ScrollViewer.ui

unix {
    target.path = /usr/local/NIO/bin
    INSTALLS += target
}

RESOURCES += \
    Images.qrc
