#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include "mainwidget.h"
#include "userinfowidget.h"
#include "orderinfowidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_loginBtn_clicked();

private:
    Ui::MainWindow *ui;
    QButtonGroup btnGroup;
    MainWidget mainWidget;
    OrderInfoWidget orderWidget;
    UserInfoWidget userInfoWidget;
};

#endif // MAINWINDOW_H
