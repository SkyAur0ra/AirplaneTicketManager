 #include "database.h"
#include "dbconnector.h"

void Migrate(DBConnector& Db)
{
    //创建表SQL
    QSqlQuery query1, query2, query3, query4;
    Db.DBprepare(query1);
    Db.DBprepare(query2);
    Db.DBprepare(query3);
    Db.DBprepare(query4);
    query3.prepare("CREATE TABLE user (id INTEGER PRIMARY KEY AUTO_INCREMENT, account VARCHAR(20) NOT NULL, password VARCHAR(50) NOT NULL);");
    query4.prepare("CREATE TABLE passenger (id INTEGER PRIMARY KEY AUTO_INCREMENT, passengerName VARCHAR(50) NOT NULL, age INT NOT NULL, identityCard VARCHAR(50) NOT NULL,"
                   " userId INT NOT NULL);");
    //拼接查询,已弃用
    //QString createUserSql = "CREATE TABLE user (id INTEGER PRIMARY KEY AUTO_INCREMENT, account VARCHAR(20) NOT NULL, password VARCHAR(50) NOT NULL);";
    //QString createPassengerSql = "CREATE TABLE passenger (id INTEGER PRIMARY KEY AUTO_INCREMENT, passengerName VARCHAR(50) NOT NULL, age INT NOT NULL, identityCard VARCHAR(50) NOT NULL,"
                                // " userId INT NOT NULL);";
    //查询表SQL
    query1.prepare("SELECT COUNT(*) from information_schema.tables where table_schema = 'airplaneticketmanager' and table_name = 'user';");

    query2.prepare("SELECT COUNT(*) from information_schema.tables where table_schema = 'airplaneticketmanager' and table_name = 'passenger';");
    //拼接查询,已弃用
    //QString userFormExistSql = "SELECT COUNT(*) from information_schema.tables where table_schema = 'airplaneticketmanager' and table_name = 'user';";
    //QString passengerFormExistSql = "SELECT COUNT(*) from information_schema.tables where table_schema = 'airplaneticketmanager' and table_name = 'passenger';";
    bool sf = query1.exec();
    if(sf)
    {
        query1.next();
        int count = query1.value(0).toInt();
        if(!count)
        {
            bool createFlag = query3.exec();
            //Db.DBExec(createUserSql,createFlag);
            if(createFlag)
                qDebug() << "用户表创建成功";
            else{
                qDebug() << "用户表创建失败,SQL语法错误";
            }
        }else{
            qDebug() << "用户表已存在";
        }
    }else{
        qDebug() << "用户表获取失败";
    }
    //qs = Db.DBExec(passengerFormExistSql,sf);
    sf = query2.exec();
    if(sf)
    {
        query2.next();
        int count = query2.value(0).toInt();
        if(!count)
        {
            bool createFlag = query4.exec();
            //Db.DBExec(createPassengerSql, createFlag);
            if(createFlag)
                qDebug() << "乘客表创建成功";
            else{
                qDebug() << "乘客表创建失败,SQL语法错误";
            }
        }else{
            qDebug() << "乘客表已存在";
        }
    }else{
        qDebug() << "乘客表获取失败";
    }
}

