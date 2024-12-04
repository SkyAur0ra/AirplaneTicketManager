#include "orderinfowidget.h"
#include "ui_orderinfowidget.h"

OrderInfoWidget::OrderInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderInfoWidget)
{
    ui->setupUi(this);
}

OrderInfoWidget::~OrderInfoWidget()
{
    delete ui;
}
