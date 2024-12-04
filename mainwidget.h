#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "loginwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWidget;
}
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    //bool status;
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H
