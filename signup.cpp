#include "signup.h"
#include "user.h"
#include <QSqlDatabase>
#include<QtSql/QtSql>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>

using namespace std;

bool signup()
{
    string username;
    string pass;
    string confirm_pass;
    string email;


    cout << "\n\t Enter username: ";
    cin >> username;

//must include...
//check for username validity....


    while (1)
    {
        do
        {
            cout << "\n\t Enter password of at least 5 characters: ";
            cin >> pass;
        } while (pass.size() < 5);

        cout << "\n\t Enter password again to confirm: ";
        cin >> confirm_pass;

        if (pass != confirm_pass)
            cout << "\n\t Password doesn't match. Please try again.\n";
        else break;

    }

    cout << "\n\t Enter email address: ";
    cin >> email;

    QSqlQuery query;
    query.prepare("INSERT INTO users_and_pass (username,email,password) "
                   "VALUES (?,?,?)"); //:username,:email,:password)");
  //  QVariant dest=QString::fromStdString(username);
    QString qstr1 = QString::fromStdString(username);
   QString qstr2 = QString::fromStdString(email);
   QString qstr3 = QString::fromStdString(pass);
    query.addBindValue(qstr1);
    query.addBindValue(qstr2);
    query.addBindValue(qstr3);
    query.exec();

system("pause");
user ob_user(username, pass, email);
ob_user.showuserinfo();

    return true;
}
