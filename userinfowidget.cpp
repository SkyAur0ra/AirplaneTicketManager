#include "userinfowidget.h"
#include "ui_userinfowidget.h"
#include "QMessageBox"
#include "addpassengerdialog.h"
#include "dbconnector.h"
#include "global.h"

UserInfoWidget::UserInfoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserInfoWidget)
{
    ui->setupUi(this);
    ui->Passenger_tableWidget->setColumnCount(3);
    QStringList header;
    header << "姓名" << "年龄" << "证件号";
    ui->Passenger_tableWidget->setHorizontalHeaderLabels(header);
    ui->Passenger_tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->Passenger_tableWidget->setColumnWidth(0, 80);
    ui->Passenger_tableWidget->setColumnWidth(1, 50);
    ui->Passenger_tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->Passenger_tableWidget->horizontalHeader()->setFont(QFont("黑体", 16));
    ui->Passenger_tableWidget->horizontalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "padding: 1px;"
        "border: none;"
        "border-bottom: 1px solid rgb(75, 120, 154);"
        "border-right: 1px solid rgb(75, 120, 154);"
        "}"
        );

}

UserInfoWidget::~UserInfoWidget()
{
    delete ui;
}


void UserInfoWidget::on_deleteBtn_clicked()
{
    int row = ui->Passenger_tableWidget->currentRow();
    if(ui->Passenger_tableWidget->rowCount() == 0)return;
    if(row == -1){
        QMessageBox::information(this, "提示", "请先选择要删除的行!");
        return;
    }
    int currentRow = ui->Passenger_tableWidget->currentRow();
    QString idNumber = ui->Passenger_tableWidget->item(currentRow, 2)->text();
    QSqlQuery query;
    DB.DBprepare(query);

    query.prepare("DELETE FROM passenger WHERE identityCard = ?;");
    query.bindValue(0, idNumber);
    bool sf = query.exec();
    if(sf){
        ui->Passenger_tableWidget->removeRow(currentRow);
        QMessageBox::information(this, "提示", "删除成功!");
    }else{
        QMessageBox::information(this, "提示", "删除失败");
    }
}


void UserInfoWidget::on_addBtn_clicked()
{
    AddPassengerDialog apDialog;
    if(apDialog.exec() == QDialog::Accepted){
        QString name = apDialog.getName();
        int age = apDialog.getAge();
        QString idNumber= apDialog.getIdentityCard();

        // 在表格末尾插入一行
        int row = ui->Passenger_tableWidget->rowCount();
        ui->Passenger_tableWidget->insertRow(row);

        // 为每一列创建 QTableWidgetItem 并设置文本内容
        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        QTableWidgetItem *ageItem = new QTableWidgetItem(QString::number(age));
        QTableWidgetItem *idItem = new QTableWidgetItem(idNumber);

        // 将数据项设置到对应的单元格
        ui->Passenger_tableWidget->setItem(row, 0, nameItem);
        ui->Passenger_tableWidget->setItem(row, 1, ageItem);
        ui->Passenger_tableWidget->setItem(row, 2, idItem);

    }
}

void UserInfoWidget::insertTableItems(){
    if(currId != -1){
        QSqlQuery query;
        DB.DBprepare(query);
        query.prepare("SELECT passengerName, age, identityCard FROM passenger WHERE userId = ?;");
        query.bindValue(0, currId);
        bool sf = query.exec();

        if(sf){
            while(query.next()){
                QString name = query.value(0).toString();
                int age = query.value(1).toInt();
                QString idNumber = query.value(2).toString();

                int row = ui->Passenger_tableWidget->rowCount();
                ui->Passenger_tableWidget->insertRow(row);

                // 为每一列创建 QTableWidgetItem 并设置文本内容
                QTableWidgetItem *nameItem = new QTableWidgetItem(name);
                QTableWidgetItem *ageItem = new QTableWidgetItem(QString::number(age));
                QTableWidgetItem *idItem = new QTableWidgetItem(idNumber);

                // 将数据项设置到对应的单元格
                ui->Passenger_tableWidget->setItem(row, 0, nameItem);
                ui->Passenger_tableWidget->setItem(row, 1, ageItem);
                ui->Passenger_tableWidget->setItem(row, 2, idItem);
            }
        }else{
            QMessageBox::information(this, "提示", "当前用户乘客信息获取失败!");
        }
    }else{
        return;
    }
}
void UserInfoWidget::clearTableItems(){
    if(currId == -1)ui->Passenger_tableWidget->setRowCount(0);
}
