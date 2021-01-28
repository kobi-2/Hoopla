#ifndef PASSWORD_H
#define PASSWORD_H

#include<string>
using namespace std;

class password
{
    string pass;
public:
    password();  // ??
    bool checkpass(string pass);
    bool changepass(string oldpass, string newpass);
};

#endif // PASSWORD_H
