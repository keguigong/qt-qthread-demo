#ifndef SCROLLVIEWER_H
#define SCROLLVIEWER_H

#include <QWidget>

namespace Ui {
class ScrollViewer;
}

class ScrollViewer : public QWidget
{
    Q_OBJECT

public:
    explicit ScrollViewer(QWidget *parent = nullptr);
    ~ScrollViewer();

private:
    Ui::ScrollViewer *ui;
};

#endif // SCROLLVIEWER_H
