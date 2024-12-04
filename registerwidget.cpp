#include "registerwidget.h"
#include "ui_registerwidget.h"
#include "QMessageBox"
#include "dbconnector.h"

RegisterWidget::RegisterWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegisterWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("注册界面");
}

void RegisterWidget::closeEvent(QCloseEvent *event) {
    // 调用基类的 closeEvent 方法
    QWidget::closeEvent(event);

    //关闭注册窗口后显示登录窗口
    // if(wm.lgWidget){
    //     wm.lgWidget->show();
    // }else{
    //     wm.lgWidget = new LoginWidget;
    //     wm.lgWidget->show();
    // }
    // wm.lgWidget->show();
}

RegisterWidget::~RegisterWidget()
{
    //DB.DBClose();
    delete ui;
}

void RegisterWidget::on_RegisterBtn1_clicked()
{
    int accountLen = ui->setAccount_LineEdit->text().trimmed().length();
    if(accountLen > 11 || accountLen < 6)
    {
        //qDebug() << "注册失败,账号长度不符合要求";
        QMessageBox::information(this, "提示", "账号长度不符合要求");
        ui->setAccount_LineEdit->clear();
        return;
    }
    QString account = ui->setAccount_LineEdit->text().trimmed();
    for(int i = 0;i < account.length();i++)
        if(!((account[i] >= '0' && account[i] <= '9') || (account[i] >= 'a' && account[i] <= 'z')
              || (account[i] >= 'A' && account[i] <= 'Z')))
        {
            //qDebug() << "注册失败,账号内容不符合要求";
            //qDebug() << account;
            QMessageBox::information(this, "提示", "账号内容不符合要求");
            ui->setAccount_LineEdit->clear();
            return;
        }
    QString password = ui->setPassword_LineEdit->text().trimmed();
    for(int i = 0;i < password.length();i++)
        if(!((password[i] >= '0' && password[i] <= '9') || (password[i] >= 'a' && password[i] <= 'z')
              || (password[i] >= 'A' && password[i] <= 'Z')))
        {
            //qDebug() << "注册失败,密码不符合要求";
            QMessageBox::information(this, "提示", "密码不符合要求");
            ui->setPassword_LineEdit->clear();
            return;
        }

    //确认密码
    QString confirmedPassword = ui->confirmPassword_LineEdit->text().trimmed();
    if(confirmedPassword.length() != password.length())
    {
        //qDebug() << "注册失败,密码不一致";
        QMessageBox::information(this, "提示", "密码不一致");
        ui->confirmPassword_LineEdit->clear();
        return;
    }
    for(int i = 0;i < confirmedPassword.length();i++)
        if(confirmedPassword[i] != password[i])
        {
            //qDebug() << "注册失败,密码不一致";
            QMessageBox::information(this, "提示", "密码不一致");
            ui->confirmPassword_LineEdit->clear();
            return;
        }

    //DB.DBOpen();
    bool sf1 = false;

    QString userExistSql = "SELECT COUNT(*) FROM user WHERE account = '" + account + "';";
    QString registerSQL = "INSERT INTO user(account, password) VALUES('" + account + "', '" +
                          password + "');";
    QSqlQuery qs = DB.DBExec(userExistSql, sf1);

    if(sf1)
    {
        qs.next();
        int count = qs.value(0).toInt();
        if(!count)
        {
            bool sf2 = false;
            DB.DBExec(registerSQL, sf2);
            if(sf2)
            {
                QMessageBox::information(this, "提示", "注册成功!");
            }else{
                qDebug() << "注册失败,SQL语句语法错误";
                return;
            }
        }else{
            QMessageBox::information(this, "提示", "用户已存在");
            ui->setAccount_LineEdit->clear();
            return;
        }
    }else{
        qDebug() << "用户获取失败";
        return;
    }

    QMessageBox::information(this, "提示", "注册成功");
    this->close();
    // if(!wm.lgWidget)wm.lgWidget = new LoginWidget;
    // wm.lgWidget->show();
}



void RegisterWidget::on_CancelBtn1_clicked()
{
    this->close();
    // if(!wm.lgWidget)wm.lgWidget = new LoginWidget;
    // wm.lgWidget->show();
}


void RegisterWidget::on_setAccount_LineEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    int accountLen = ui->setAccount_LineEdit->text().trimmed().length();
    if(accountLen > 11 || accountLen < 6)
    {
        if(!ui->label->isVisible()){
            ui->label->setStyleSheet("color:RED");
            ui->label->setVisible(true);
            return;
        }
    }else{
        ui->label->setVisible(false);
    }
    QString account = ui->setAccount_LineEdit->text().trimmed();
    for(int i = 0;i < account.length();i++){
        if(!((account[i] >= '0' && account[i] <= '9') || (account[i] >= 'a' && account[i] <= 'z')
              || (account[i] >= 'A' && account[i] <= 'Z')))
        {
            if(!ui->label->isVisible()){
                ui->label->setStyleSheet("color:RED");
                ui->label->setVisible(true);
                return;
            }
        }
    }
    ui->label->setVisible(false);
}

