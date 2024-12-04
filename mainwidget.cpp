#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "dbconnector.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    //status = false;
}

MainWidget::~MainWidget()
{
    delete ui;
}
