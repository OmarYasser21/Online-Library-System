#ifndef USERLIST_H
#define USERLIST_H
#include<cstring>
#include<iostream>
using namespace std;
#include "User.h"


class UserList
{
    private:
      User* users;
      int capacity;
      int usersCount;
    public:
      UserList(int capacity);
      bool addUser(User user); // at the end of the array.
      User& searchUser(string name);
      User& searchUser(int id);
      void deleteUser(int id);
      friend ostream &operator<<( ostream &output, UserList &userList );//to display all users.
     ~UserList();

};

#endif // USERLIST_H
