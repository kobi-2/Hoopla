#ifndef GROUPS_H
#define GROUPS_H
#include<iostream>
#include<string>
#include "post.h"
using namespace std;

class groups
{
    string group_name;
    int num_of_admin;
    string *admin_list;
    int num_of_group_member;
    string *group_member_list;
    int num_of_posts;
    post *post;
public:
    groups();
};

#endif // GROUPS_H
