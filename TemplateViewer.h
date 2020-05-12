#ifndef TEMPLATEVIEWER_H
#define TEMPLATEVIEWER_H

#include <QWidget>

namespace Ui {
class TemplateViewer;
}

class TemplateViewer : public QWidget
{
    Q_OBJECT

public:
    explicit TemplateViewer(QWidget *parent = nullptr);
    ~TemplateViewer();

private slots:
    void on_nextbtn_clicked();

    void on_beforebtn_clicked();

    void on_homebtn_clicked();

    void on_maintainbtn_clicked();

    void on_settingsbtn_clicked();

    void on_alertbtn_clicked();

    void on_aboutbtn_clicked();

private:
    Ui::TemplateViewer *ui;
    int pageNum;

    void processPageNum(int pageNum);
};

#endif // TEMPLATEVIEWER_H
