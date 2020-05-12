#ifndef SUBTHREAD_H
#define SUBTHREAD_H

#include <QThread>

class SubThread : public QThread
{
    Q_OBJECT
public:
    SubThread();

signals:
    void updateCounter(int counter);

private:
    int counter_;
};

#endif // SUBTHREAD_H
