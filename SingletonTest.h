#ifndef SINGLETONTEST_H
#define SINGLETONTEST_H

#include <QObject>

class SingletonTest : public QObject
{
    Q_OBJECT
public:
    explicit SingletonTest(QObject *parent = nullptr);

signals:


private:
    QString name;
    int age;
    bool sex;
};

#endif // SINGLETONTEST_H
