#include "registerdialog.h"
#include "ui_registerdialog.h"
#include "dbconnector.h"
#include "QMessageBox"

RegisterDialog::RegisterDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    //qDebug() << "hello";
    this->setWindowTitle("注册界面");
    ui->accountUnmatch_Label->setVisible(false);
    ui->passwordUnmatch_Label->setVisible(false);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_RegisterBtn1_clicked()
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
    QSqlQuery query1, query2;
    DB.DBprepare(query1);
    DB.DBprepare(query2);
    query1.prepare("SELECT COUNT(*) FROM user WHERE account = ?");
    query2.prepare("INSERT INTO user(account, password) VALUES(?, ?);");

    query1.bindValue(0, account);
    query2.bindValue(0, account);
    query2.bindValue(1, password);
    bool sf1 = query1.exec();

    //拼接查询,已弃用
    //QString userExistSql = "SELECT COUNT(*) FROM user WHERE account = '" + account + "';";
    //QString registerSQL = "INSERT INTO user(account, password) VALUES('" + account + "', '" +
    //                     password + "');";
    //QSqlQuery qs = DB.DBExec(userExistSql, sf1);

    if(sf1)
    {
        query1.next();
        int count = query1.value(0).toInt();
        if(!count)
        {
            bool sf2 = query2.exec();
            //DB.DBExec(registerSQL, sf2);
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

    this->close();
}


void RegisterDialog::on_CancelBtn1_clicked()
{
    this->close();
}


void RegisterDialog::on_setAccount_LineEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    int accountLen = ui->setAccount_LineEdit->text().trimmed().length();
    if(accountLen > 11 || accountLen < 6)
    {
        if(!ui->accountUnmatch_Label->isVisible()){
            ui->accountUnmatch_Label->setStyleSheet("color:RED");
            ui->accountUnmatch_Label->setVisible(true);
            return;
        }else{
            return;
        }
    }
    QString account = ui->setAccount_LineEdit->text().trimmed();
    for(int i = 0;i < account.length();i++){
        if(!((account[i] >= '0' && account[i] <= '9') || (account[i] >= 'a' && account[i] <= 'z')
              || (account[i] >= 'A' && account[i] <= 'Z')))
        {
            if(!ui->accountUnmatch_Label->isVisible()){
                ui->accountUnmatch_Label->setStyleSheet("color:RED");
                ui->accountUnmatch_Label->setVisible(true);
                return;
            }
        }
    }
    ui->accountUnmatch_Label->setVisible(false);
}


void RegisterDialog::on_setPassword_LineEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    QString password = ui->setPassword_LineEdit->text().trimmed();
    for(int i = 0;i < password.length();i++){
        if(!((password[i] >= '0' && password[i] <= '9') || (password[i] >= 'a' && password[i] <= 'z')
              || (password[i] >= 'A' && password[i] <= 'Z')))
        {
            if(!ui->passwordUnmatch_Label->isVisible()){
                ui->passwordUnmatch_Label->setStyleSheet("color:RED");
                ui->passwordUnmatch_Label->setVisible(true);
                return;
            }else{
                return;
            }
        }
    }
    ui->passwordUnmatch_Label->setVisible(false);
}

