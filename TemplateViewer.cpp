#include "TemplateViewer.h"
#include "ui_TemplateViewer.h"

TemplateViewer::TemplateViewer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TemplateViewer)
{
    ui->setupUi(this);
    pageNum = 0;
    on_homebtn_clicked();
    processPageNum(0);
}

TemplateViewer::~TemplateViewer()
{
    delete ui;
}

void TemplateViewer::on_nextbtn_clicked()
{
    processPageNum(0);
}


void TemplateViewer::on_beforebtn_clicked()
{

}

void TemplateViewer::on_homebtn_clicked()
{
    pageNum = 0;
    processPageNum(pageNum);
}

void TemplateViewer::on_maintainbtn_clicked()
{
    pageNum = 1;
    processPageNum(pageNum);
}

void TemplateViewer::on_settingsbtn_clicked()
{
    pageNum = 2;
    processPageNum(pageNum);
}

void TemplateViewer::on_alertbtn_clicked()
{
    pageNum = 3;
    processPageNum(pageNum);
}

void TemplateViewer::on_aboutbtn_clicked()
{
    pageNum = 4;
    processPageNum(pageNum);
}


void TemplateViewer::processPageNum(int pageNum)
{
    switch (pageNum) {
    case 0:
        ui->backgroundContainer->setStyleSheet("QWidget#backgroundContainer {background: url(:/images/upgrade.png) }");
        break;
    case 1:
        ui->backgroundContainer->setStyleSheet("QWidget#backgroundContainer {background: url(:/images/maintain_1.png) }");
        break;
    case 2:
        ui->backgroundContainer->setStyleSheet("QWidget#backgroundContainer {background: url(:/images/config.png) }");
        break;
    case 3:
        ui->backgroundContainer->setStyleSheet("QWidget#backgroundContainer {background: url(:/images/alert_1.png) }");
        break;
    case 4:
        ui->backgroundContainer->setStyleSheet("QWidget#backgroundContainer {background: url(:/images/about_1.png) }");
        break;
    default:
        break;
    }
}
