#include <iostream>
#include <string>

#include <QCoreApplication>
#include<QDebug>
#include<QSqlDatabase>
#include<QtSql/QtSql>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QDebug>

#include"menu.h"

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase :: addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("raiyan");
    db.setPassword("1234");
    db.setDatabaseName("facebook");
    if(db.open())
        cout<<"db opened\n";
    system("pause");

    menu();

//db close...
//db close...

    qDebug()<< "whole program ran well! Now Exiting...\n";
    system("pause");

//  ??
//    return a.exec();

}
