#include "logindialog.h"
#include "ui_logindialog.h"
#include "database.h"
#include "registerdialog.h"
#include "QMessageBox"
#include "global.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("登录界面");
    ui->Register_Label->setText("<a href='open_window'>还没有账号?快来注册一个</a>");
    ui->Register_Label->setOpenExternalLinks(false);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_Register_Label_linkActivated(const QString &link)
{
    Q_UNUSED(link);
    RegisterDialog rgDialog;
    rgDialog.exec();
}


void LoginDialog::on_CancelBtn_clicked()
{
    this->close();
}


void LoginDialog::on_LoginBtn_clicked()
{
    QString account = ui->Account_LineEdit->text().trimmed();
    QString password = ui->Password_LineEdit->text().trimmed();

    QSqlQuery query1, query2, query3;
    DB.DBprepare(query1);
    DB.DBprepare(query2);
    DB.DBprepare(query3);

    query1.prepare("SELECT COUNT(*) FROM user WHERE account = ?");
    query2.prepare("SELECT password FROM user WHERE account = ?");
    query3.prepare("SELECT id FROM user WHERE account = ?");
    query1.bindValue(0, account);
    query2.bindValue(0, account);
    query3.bindValue(0, account);

    bool sf1 = query1.exec();

    //拼接查询,已弃用
    //QString userExistSql = "SELECT COUNT(*) FROM user WHERE account = '" + account + "';";
    //QString userPasswordSql = "SELECT password FROM user WHERE account = '" + account + "';";
    //QSqlQuery qs = DB.DBExec(userExistSql, sf1);

    if(sf1)
    {
        query1.next();
        int count = query1.value(0).toInt();
        if(count)
        {
            bool sf2 = query2.exec();
            //QSqlQuery passwordQs = DB.DBExec(userPasswordSql, sf2);
            if(sf2)
            {
                query2.next();
                QString uPassword = query2.value(0).toString();
                if(uPassword == password)
                {
                    //拼接查询,已弃用
                    //QMessageBox::information(this, "提示", "登录成功!");
                    //QString userIdSql = "SELECT id FROM user WHERE account = '" + account + "';";
                    //QSqlQuery idQs = DB.DBExec(userIdSql, sf2);
                    query3.exec();
                    query3.next();
                    currId = query3.value(0).toInt();
                    //qDebug() << currId;
                    ui->Account_LineEdit->clear();
                    ui->Password_LineEdit->clear();
                }
                else
                {
                    QMessageBox::information(this, "提示", "账号或密码错误");
                    ui->Password_LineEdit->clear();
                    return;
                }
            }else{
                qDebug() << "密码查询失败,SQL语句语法错误";
                return;
            }
        }else{
            QMessageBox::information(this, "提示", "账号或密码错误");
            ui->Password_LineEdit->clear();
            return;
        }
    }else{
        qDebug() << "用户获取失败";
        return;
    }
    loginStatus = true;
    this->close();
}

