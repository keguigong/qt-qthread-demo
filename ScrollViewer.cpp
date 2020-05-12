#include "ScrollViewer.h"
#include "ui_ScrollViewer.h"

ScrollViewer::ScrollViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScrollViewer)
{
    ui->setupUi(this);
}

ScrollViewer::~ScrollViewer()
{
    delete ui;
}
