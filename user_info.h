#ifndef USER_INFO_H
#define USER_INFO_H

#include<iostream>
using namespace std;

class user_info
{
    string username;
    string first_name;
    string last_name;
    string image;
    int phone_no;
    char gender;
    string school;
    string college;
    bool relationship_status;
    string profession;
public:
    user_info();
    void set_username(string handle);
    string get_username();
    void set_first_name(string _firstname);
    string get_first_name();

    void set_last_name(string _lastname);
    string get_last_name();

    void set_phn_no(int a);
    int get_phn_no();

    void set_gender(char x1);
    char get_gender();

};

#endif // USER_INFO_H
