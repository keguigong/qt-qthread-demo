#include "ThreadTest.h"
#include <QDebug>

ThreadTest::ThreadTest()
{
    counter_ = 0;
    qDebug() << "threadTest constructed!";
}

void ThreadTest::resetCounterSlot()
{
    counter_ = 0;
    emit updateSignal(counter_);
}

void ThreadTest::run()
{
    qDebug() << "Sub Thread ID: " << QThread::currentThreadId();
    while (true)
    {
        emit timerStartSignal();
        uint randNum = rand()%10 * 100 + 100;
        qDebug() << "counter:" << counter_ << "; sub thread sleep:" << randNum << "ms";
        msleep(randNum);
        counter_++;
        emit timerStopSignal();
    }
}
