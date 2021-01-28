#ifndef USER_H
#define USER_H


#include <iostream>
#include <string>
using namespace std;

class user
{
private:
    string username;
    string password;
    string email;
    unsigned long long numberoffriends;
    string *friendlist;
public:
    user(string username, string password, string email);
    ~user();
    string get_username();
    string get_email();
    void showuserinfo();
};


#endif // USER_H
