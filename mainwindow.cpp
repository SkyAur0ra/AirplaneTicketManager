#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbconnector.h"
#include "logindialog.h"
#include "global.h"
#include "QMessageBox"
#include "database.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DB.DBOpen();
    Migrate(DB);
    this->setWindowTitle("主页");

    ui->stackedWidget->addWidget(&mainWidget);
    ui->stackedWidget->addWidget(&orderWidget);
    ui->stackedWidget->addWidget(&userInfoWidget);

    btnGroup.addButton(ui->mainBtn, 0);
    btnGroup.addButton(ui->orderBtn, 1);
    btnGroup.addButton(ui->userInfoBtn, 2);
    btnGroup.addButton(ui->loginBtn, 3);

    connect(&btnGroup, &QButtonGroup::buttonClicked,
            [this](QAbstractButton *button) {
                // 从按钮组中获取按钮的ID
                int id = btnGroup.id(button);
                //若未登录则无法查看行程以及我的
                if((id == 1 || id == 2) && !loginStatus){
                    btnGroup.button(0)->setChecked(true);
                    ui->stackedWidget->setCurrentIndex(0);
                    QMessageBox::information(this, "提示", "请先登录!");
                    LoginDialog lgDialog;
                    lgDialog.exec();
                    //qDebug() << loginStatus;
                    if(loginStatus){
                        ui->loginBtn->setText("退出");
                        userInfoWidget.insertTableItems();
                    }
                    return;
                }
                else if(id == 3){
                    if(!loginStatus){
                        LoginDialog lgDialog;
                        lgDialog.exec();
                        if(loginStatus){
                            ui->loginBtn->setText("退出");
                            //qDebug() << currId;
                            userInfoWidget.insertTableItems();
                        }
                        btnGroup.button(0)->setChecked(true);
                        ui->stackedWidget->setCurrentIndex(0);
                    }
                    else{
                        int whetherExit = QMessageBox::information(this, "提示", "是否退出当前账号", "是", "否");
                        if(whetherExit == 0){
                            loginStatus = false;
                            currId = -1;
                            userInfoWidget.clearTableItems();
                            btnGroup.button(0)->setChecked(true);
                            ui->stackedWidget->setCurrentIndex(0);
                            ui->loginBtn->setText("登录");
                        }
                    }
                    return;
                }
                // 根据ID设置stackedWidget的当前索引
                ui->stackedWidget->setCurrentIndex(id);
            });

    // 设置默认选中的页面
    btnGroup.button(0)->setChecked(true);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    DB.DBClose();
    delete ui;
}


