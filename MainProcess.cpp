#include "MainProcess.h"
#include "ThreadTest.h"

#include <QDebug>

MainProcess::MainProcess(QObject *parent) : QObject(parent)
{
    threadTest = new ThreadTest;
    timer = new QTimer;
    timer->setInterval(950);
    qDebug() <<"threadTest timeout:" << timer->interval() << "ms";
    qDebug() << "threadTest starts.";
    threadTest->start();
    qDebug() << "Main Thread ID: " << QThread::currentThreadId();

    connect(threadTest, &ThreadTest::updateSignal, this, &MainProcess::processCounterSlot);
    connect(this, &MainProcess::resetCounterSignal, threadTest, &ThreadTest::resetCounterSlot);
    connect(threadTest, &ThreadTest::timerStartSignal, this, &MainProcess::timerStartSlot);
    connect(threadTest, &ThreadTest::timerStopSignal, this, &MainProcess::timerStopSlot);
    connect(timer, &QTimer::timeout, this, &MainProcess::timeoutSlot);
}

void MainProcess::processCounterSlot(int counter)
{

}

void MainProcess::timerStartSlot()
{
    timer->start();
}

void MainProcess::timerStopSlot()
{
    timer->stop();
}
void MainProcess::timeoutSlot()
{
    qDebug() << "threadTest timeout!";
    emit resetCounterSignal();
    restartThreadTest();
}

void MainProcess::restartThreadTest()
{
    qDebug() << "threadTest terminated!";
    threadTest->terminate();
    qDebug() << "threadTest waiting...";
    threadTest->wait();
    qDebug() << "threadTest starting...";
    threadTest->start();
}
