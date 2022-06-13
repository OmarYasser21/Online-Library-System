#include "UserList.h"
#include<cstring>
#include<iostream>
using namespace std;
#include "User.h"

UserList::UserList(int capacity)
{
    usersCount=0;
    this-> capacity=capacity;
    users= new User[capacity];
}
bool UserList::addUser(User user)
{
    if (usersCount<=capacity)
    {
       users[usersCount]=user;
        usersCount++ ;
        return true ;
    }
    else
    {
        cout<<"cannot add more users, array is full"<<endl;
       return false;
    }

}
User& UserList::searchUser(string name)
{
    for(int i=0; i<usersCount; i++){
        if (name=users[i].getname){
            cout<< "Name: "<<users[i].getName()<<endl;
            cout<< "Age: "<<users[i].getAge()<<endl;
            cout<< "ID: "<<users[i].getId()<<endl;
            cout<< "Email: "<<users[i].getEmail()<<endl;
        }

    }
    return nullptr;
}
User& UserList::searchUser(int id)
{
    for(int i=0; i<usersCount; i++){
        if (id=users[i].id){
            cout<< "Name: "<<users[i].getName()<<endl;
            cout<< "Age: "<<users[i].getAge()<<endl;
            cout<< "ID: "<<users[i].getId()<<endl;
            cout<< "Email: "<<users[i].getEmail()<<endl;
        }

    }
    return nullptr;
}
void UserList::deleteUser(int id)
{
    for(int i=0; i<usersCount; i++){
        if (id=users[i].id){
            users[i]=users[i-1];
            usersCount-- ;
        }

    }

}
ostream &operator<<(ostream &output, UserList &userList)
{
    for(i=0;i<userList.usersCount;i++){
           output<<"Name: "<<userList.users[i].getName<<endl<< "Age: "<<userList.users[i].getAge<<endl<< "ID: "<<userList.users[i].getId<<endl<< "Email: "<<userList.users[i].getEmail<<endl;
    }
}
UserList::~UserList()
{
    delete[] users;
}

