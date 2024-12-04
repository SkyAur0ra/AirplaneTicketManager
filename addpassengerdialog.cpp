#include "addpassengerdialog.h"
#include "ui_addpassengerdialog.h"
#include "dbconnector.h"
#include "QMessageBox"
#include "global.h"

AddPassengerDialog::AddPassengerDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPassengerDialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject);
}

AddPassengerDialog::~AddPassengerDialog()
{
    delete ui;
}

QString AddPassengerDialog::getName()const{
    return ui->Name_LineEdit->text().trimmed();
}

int AddPassengerDialog::getAge()const{
    return ui->Age_LineEdit->text().trimmed().toInt();
}

QString AddPassengerDialog::getIdentityCard()const{
    return ui->IdentityCard_LineEdit->text().trimmed();
}

void AddPassengerDialog::on_buttonBox_accepted()
{
    QString name = ui->Name_LineEdit->text().trimmed();
    int age = ui->Age_LineEdit->text().trimmed().toInt();
    QString idNumber= ui->IdentityCard_LineEdit->text().trimmed();

    //数据库插入数据
    QSqlQuery query1;
    QSqlQuery query2;
    DB.DBprepare(query1);
    DB.DBprepare(query2);
    query1.prepare("SELECT COUNT(*) FROM passenger WHERE identityCard = ?;");
    query2.prepare("INSERT INTO passenger(passengerName, age, identityCard, userId) VALUES(?, ?, ?, ?);");

    // 绑定参数
    query1.bindValue(0, idNumber);
    query2.bindValue(0, name);
    query2.bindValue(1, age);
    query2.bindValue(2, idNumber);
    query2.bindValue(3, currId);
    //拼接查询,已弃用
    //QString passengerExistSql = "SELECT COUNT(*) FROM passenger WHERE identityCard = '" + idNumber + "';";
    //QString addSQL = "INSERT INTO passenger(passengerName, age, identidyCard) VALUES('" + name + "', '" +
    //                age + "', '" + idNumber + "');";
    bool sf1 = query1.exec();
    //QSqlQuery qs = DB.DBExec(passengerExistSql, sf1);

    if(sf1)
    {
        query1.next();
        int count = query1.value(0).toInt();
        if(!count)
        {
            bool sf2 = query2.exec();
            //DB.DBExec(addSQL, sf2);
            if(sf2)
            {
                QMessageBox::information(this, "提示", "添加成功!");
            }else{
                qDebug() << "添加失败,SQL语句语法错误";
                return;
            }
        }else{
            QMessageBox::information(this, "提示", "乘客已存在");
            ui->Name_LineEdit->clear();
            ui->Age_LineEdit->clear();
            ui->IdentityCard_LineEdit->clear();
            return;
        }
    }else{
        qDebug() << "乘客获取失败";
        return;
    }
    this->close();
}


void AddPassengerDialog::on_buttonBox_rejected()
{
    this->close();
}

