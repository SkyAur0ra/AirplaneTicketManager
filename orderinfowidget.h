#ifndef ORDERINFOWIDGET_H
#define ORDERINFOWIDGET_H

#include <QWidget>

namespace Ui {
class OrderInfoWidget;
}

class OrderInfoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OrderInfoWidget(QWidget *parent = nullptr);
    ~OrderInfoWidget();

private:
    Ui::OrderInfoWidget *ui;
};

#endif // ORDERINFOWIDGET_H
