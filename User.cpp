#include "User.h"
int User::count=0;
//default constructor
User::User()
{
  name = "";
  setId(++count);
}
//constructor
User::User(string n,int ag,string E,string pass):name(n),age(ag),email(E),password(pass)
{
   setId(++count);
}
//copy constructor
User::User(const User& user)
{
    name = user.name;
    age = user.age;
    email = user.email;
    password = user.password;
    id = user.id;
    setId(++count);

}
//Mutator function
void User::setName(string n)
{
    name = n ;
}
//Accessors function
string User::getName()const
{
    return name;
}
//Mutator function
void User::setPassword(string pass)
{
    password = pass;
}
//Accessors function
string User::getPassword()
{
    return password;
}
//Mutator function
void User::setEmail(string E)
{
    email = E;
}
//Accessors function
string User::getEmail()
{
    return email;
}
//Mutator function
void User::setAge(int ag)
{
    age = ag;
}
//Accessors function
int User::getAge()
{
    return age;
}
//Mutator function
void User::setId(int i)
{
    id = i ;
}
//Accessors function
int User::getId()
{
    return id ;
}
// == operator overloading to check if any of the users are equal
bool User::operator==(const User& user)
{
    bool status;
    if (name==user.name && age==user.age && email==user.email)
        status=true;
    else
        status=false;
}
// << operator overloading to print outputs
ostream &operator<<(ostream &output, const User &user )
{
    output<<endl<<"Name : "<<user.name<< "|" <<"Age : "<<user.age<<"|"<<"Id :"<<user.id<< "|" <<"Email : "<< user.email ;
    return output;
}
// >> operator overloading to get inputs
istream &operator>>( istream &input, User &user )
{
    cin>>user.name;
    cin>>user.age;
    cin>>user.email;
    cin>>user.password;
    return input;
}
