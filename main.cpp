#include "HelloThread.h"
#include "MainProcess.h"
#include "ThreadTest.h"
#include "SingletonTest.h"
#include "TemplateViewer.h"

#include <QDebug>
#include <QCoreApplication>
#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    MainProcess a;
    return app.exec();
}
