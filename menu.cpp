#include <iostream>
#include <string>
#include "menu.h"
#include "signup.h"
#include "signin.h"
#include <QSqlDatabase>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>

using namespace std;

void menu()
{
    /* 		moved to main.cpp...

    QSqlDatabase db = QSqlDatabase :: addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("raiyan");
    db.setPassword("1234");
    db.setDatabaseName("facebook");
    db.open();

    */

    while (1)
    {
        int cursor = showmenu();
        switch (cursor)
        {

        case 1:
            system("CLS");
            if (signup())
            {
                system("CLS");
                cout << "\n\n\t Sign up successful! ";
            }
            else cout << "\n\n\t Sign up failed. ";
            system("pause");
            break;

        case 2:
            system("CLS");
            signin();
            break;
        case 3 :
            return;
        }
    }
}


int showmenu()
{
    int cursor=0;
    do
    {
        system("CLS");
        cout << "\n\n";
        cout << "\t 1. Sign up" << endl;
        cout << "\t 2. Sign in" << endl;
        cout << "\t 3. Exit" << endl;
        cout << "\t Enter a valid key to continue...\n" << endl;
        cin >> cursor;
    } while (cursor < 1 || cursor>3);
    return cursor;
}
