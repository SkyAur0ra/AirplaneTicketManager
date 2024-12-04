#include "dbconnector.h"

DBConnector::DBConnector()
{
    openFlag = false;
}

void DBConnector::DBOpen()
{
    dbcon = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    dbcon.setHostName("127.0.0.1");              // MySQL 服务器ip地址，本机
    dbcon.setPort(3306);                         // 端口号，默认
    dbcon.setDatabaseName("Local8080");           // ODBC 数据源名称
    bool ok = dbcon.open();
    if(!ok)
        qDebug() << "Error, 数据库文件打开失败！";
    qDebug() << "数据库连接成功!";
    openFlag = true;
}

void DBConnector::DBClose()
{
    openFlag = false;
    dbcon.close();
    qDebug() << "已关闭数据库连接!";
}

void DBConnector::DBprepare(QSqlQuery& query)
{
    query = QSqlQuery(dbcon);
}

DBConnector DB;
