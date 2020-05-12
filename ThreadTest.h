#ifndef THREADTEST_H
#define THREADTEST_H

#include <QThread>

class ThreadTest : public QThread
{
    Q_OBJECT
public:
    ThreadTest();

signals:
    void updateSignal(int counter);
    void timerStartSignal();
    void timerStopSignal();

public slots:
    void resetCounterSlot();

protected:
    void run();

private:
    int counter_;
};

#endif // THREADTEST_H
