#ifndef MAINPROCESS_H
#define MAINPROCESS_H

#include <QObject>
#include <QTimer>

class ThreadTest;

class MainProcess : public QObject
{
    Q_OBJECT
public:
    explicit MainProcess(QObject *parent = nullptr);

signals:
    void resetCounterSignal();

public slots:
    void processCounterSlot(int counter);

    void timerStartSlot();
    void timerStopSlot();
    void timeoutSlot();

private:
    ThreadTest *threadTest;
    QTimer *timer;

    void restartThreadTest();
};

#endif // MAINPROCESS_H
