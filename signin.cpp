#include "signin.h"
#include"user.h"
#include "base_menu.h"
//  #include "user_info.h"
//  #include "personal_info_update.h"
#include <string>
#include <QSqlDatabase>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

using namespace std;
void signin()
{
  string username;
  string pass;
  bool is_login_successful=false;
  while (! is_login_successful)
  {

    //press esc to go back ...

    cout << "\n\t Enter username: ";
    cin >> username;
    cout << "\n\t Enter password: ";
    cin >> pass;

    QSqlQuery qry;
    qry.prepare("SELECT * FROM users_and_pass");
    //if(!qry.exec())
    //  qDebug()<<qry.lastError();
    //  else{
    qry.exec();
    QSqlRecord rec = qry.record();
    int cols = rec.count();
    int u1=1, p1=3;
    QString temp;
    for (int c = 0; c < cols; c++)
    {
      temp = rec.fieldName(c);
      string str1 = temp.toLocal8Bit().constData();
      if (str1 == "username")
      {
        u1 = c;
      }
      else if (str1 == "password")
      {
        p1 = c;
      }
    }

    QString temp1;
    bool is_UserName_correct = false;
    while (qry.next())
    {
      temp = "";
      temp = qry.value(u1).toString();
      std::string str2 = temp.toLocal8Bit().constData();
      if (str2 == username)
      {
        is_UserName_correct = true;
        temp1 = qry.value(p1).toString();
        std::string str3 = temp1.toLocal8Bit().constData();
        if (str3 == pass)
        {
          is_login_successful=true;
          cout << "Login successful!\n\n";
          system("pause");
          break;
        }
        else
        {
          cout << "Incorrect username/password. Please try again. \n\n";
          break;
        }
      }
    }
    if (is_UserName_correct == false)
    {
      cout << "Incorrect username/password. Please try again. \n\n";
    }
  }

  //...
  base_menu();
}
