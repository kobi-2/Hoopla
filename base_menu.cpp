#include<iostream>
#include<string>
#include "base_menu.h"
using namespace std;

void base_menu()
{
    while(1)
    {
        int cursor=0;
        bool at_home_menu=true;
        bool at_profile_menu=false;
        bool at_groups_menu=false;
        bool at_update_info_menu=false;
        while(at_home_menu)
        {
           cursor=show_home_menu();

           switch (cursor)
           {

           case 1:
               break;
           case 2:
               at_home_menu=false;
               at_profile_menu=true;
               at_groups_menu=false;
               at_update_info_menu=false;
               break;
           case 3:
               at_groups_menu=true;
               at_home_menu=false;
               at_profile_menu=false;
               at_update_info_menu=false;
               break;
           case 4:
               at_groups_menu=false;
               at_home_menu=false;
               at_profile_menu=false;
               at_update_info_menu=true;
               break;
           case 5:
               return;

           }

        }

        while(at_profile_menu)
        {
            cursor=show_profile_menu();
            switch(cursor)
            {
            case 1:
                at_home_menu=true;
                at_profile_menu=false;
                at_groups_menu=false;
                at_update_info_menu=false;
                break;
            case 2:
                break;
            case 3:
                at_home_menu=false;
                at_profile_menu=false;
                at_groups_menu=true;
                at_update_info_menu=false;
                break;
            case 4:
                at_home_menu=false;
                at_profile_menu=false;
                at_groups_menu=false;
                at_update_info_menu=true;
                break;
            case 5:
                return;
            }

        }
        while(at_groups_menu)
        {
           cursor=show_groups_menu();

           switch (cursor)
           {

           case 1:
               at_home_menu=true;
               at_profile_menu=false;
               at_groups_menu=false;
               at_update_info_menu=false;
               break;
           case 2:
               at_home_menu=false;
               at_profile_menu=true;
               at_groups_menu=false;
               at_update_info_menu=false;
               break;
           case 3:
               break;
           case 4:
               at_groups_menu=false;
               at_home_menu=false;
               at_profile_menu=false;
               at_update_info_menu=true;
               break;
           case 5:
               return;

           }
        }

        while(at_update_info_menu)
        {
           cursor=show_update_info_menu();

           switch (cursor)
           {

           case 1:
               at_home_menu=true;
               at_profile_menu=false;
               at_groups_menu=false;
               at_update_info_menu=false;
               break;
           case 2:
               at_home_menu=false;
               at_profile_menu=true;
               at_groups_menu=false;
               at_update_info_menu=false;
               break;
           case 3:
               at_home_menu=false;
               at_profile_menu=false;
               at_groups_menu=true;
               at_update_info_menu=false;
               break;
           case 4:
               break;
           case 5:
               return;

           }
        }

    }

}


int show_home_menu()
{
    int cursor=0;
    do{
        system("CLS");
        cout<<"\n\n";
        cout<<"\t 1. Home";
        cout<<"\t 2. Profile";
        cout<<"\n\n";
        cout<<"\t 3. Groups";
        cout<<"\t 4. Update Info";
        cout<<"\n\n";
        cout<<"\t 5. Sign Out";
        cout<<"\n\n";

        //cout<<" Press 1,2,3 or 'n' for next post or 'p' for previous post...\n";
        //cout<< show_home_post();
        cin>>cursor;

    }while(cursor<1 || cursor>5);
    return cursor;
}


int show_profile_menu()
{
    int cursor=0;
    do{
        system("CLS");
        cout<<"\n\n";
        cout<<"\t 1. Home";
        cout<<"\t 2. Profile";
        cout<<"\n\n";
        cout<<"\t 3. Groups";
        cout<<"\t 4. Update Info";
        cout<<"\n\n";
        cout<<"\t 5. Sign Out";
        cout<<"\n\n";

        //cout<<" Press 1,2,3 or 'n' for next post or 'p' for previous post...\n";
        //cout<< show_user_post();
        cin>>cursor;

    }while(cursor<1 || cursor>5);
    return cursor;
}

int show_groups_menu()
{
    cout<<"in groups menu. need work\n";
    return 0;
}

int show_update_info_menu()
{
    cout<<"in update info menu. need work\n";
    return 0;
}
