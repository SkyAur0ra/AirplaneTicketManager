#ifndef DBCONNECTOR_H
#define DBCONNECTOR_H

#include <QtSql/QSqlDatabase>
#include <QStringList>
#include <QtSql/QSqlQuery>
#include <QDebug>

class DBConnector{
private:
    bool openFlag;
    QSqlDatabase dbcon;
public:
    DBConnector();
    void DBOpen();
    void DBClose();
    void DBprepare(QSqlQuery& query);
};

extern DBConnector DB;

#endif // DBCONNECTOR_H
