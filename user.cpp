#include <iostream>
#include "user.h"

user::user(string username, string password, string email)
{
    this->username = username;
    this->password = password;
    this->email = email;
    numberoffriends = 0;
    friendlist = new string[numberoffriends];
}

user::~user()
{
    cout << "in the desctructor in user class. need work";
}

string user:: get_username()
{
    return username;
}

string user:: get_email()
{
    return email;
}

void user::showuserinfo()
{
    cout << "\n\t username: " << username << "\n\t email: " << email << "\n\t Number of Friends: " << numberoffriends << endl;
    system("pause");
}

