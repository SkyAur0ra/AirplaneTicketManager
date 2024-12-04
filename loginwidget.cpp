#include "loginwidget.h"
#include "ui_loginwidget.h"
#include "database.h"
#include "QMessageBox"

LoginWidget::LoginWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("登录界面");
    ui->Register_Label->setText("<a href='open_window'>还没有账号?快来注册一个</a>");
    ui->Register_Label->setOpenExternalLinks(false);
    connect(ui->Register_Label, &QLabel::linkActivated, this, &LoginWidget::on_Register_Label_linkActivated);
}

LoginWidget::~LoginWidget()
{
    //DB.DBClose();
    delete ui;
}

void LoginWidget::on_LoginBtn_clicked()
{
    //DB.DBOpen();
    bool sf1 = false;
    QString account = ui->Account_LineEdit->text().trimmed();
    QString password = ui->Password_LineEdit->text().trimmed();
    QString userExistSql = "SELECT COUNT(*) FROM user WHERE account = '" + account + "';";
    QString userPasswordSql = "SELECT password FROM user WHERE account = '" + account + "';";
    QSqlQuery qs = DB.DBExec(userExistSql, sf1);

    if(sf1)
    {
        qs.next();
        int count = qs.value(0).toInt();
        if(count)
        {
            bool sf2 = false;
            QSqlQuery passwordQs = DB.DBExec(userPasswordSql, sf2);
            passwordQs.next();
            if(sf2)
            {
                QString uPassword = passwordQs.value(0).toString();
                if(uPassword == password)
                {
                    QMessageBox::information(this, "提示", "登录成功!");
                    ui->Account_LineEdit->clear();
                    ui->Password_LineEdit->clear();
                    //status = true;
                }
                else
                {
                    QMessageBox::information(this, "提示", "密码错误");
                    ui->Password_LineEdit->clear();
                    return;
                }
            }else{
                qDebug() << "密码查询失败,SQL语句语法错误";
                return;
            }
        }else{
            QMessageBox::information(this, "提示", "账号不存在");
            ui->Account_LineEdit->clear();
            ui->Password_LineEdit->clear();
            return;
        }
    }else{
        qDebug() << "用户获取失败";
        return;
    }
    //DB.DBClose();
    this->close();
}


void LoginWidget::on_Register_Label_linkActivated(const QString &link)
{
     Q_UNUSED(link);
//     if(!wm.rgWidget)wm.rgWidget = new RegisterWidget(nullptr);
//     this->close();
//     wm.rgWidget->show();
}


void LoginWidget::on_CancelBtn_clicked()
{
    this->close();
}


