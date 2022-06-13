#ifndef BOOK_H
#define BOOK_H
#include<cstring>
#include<iostream>
#include "User.h"
using namespace std;

class Book
{
private:
    string title;
    string category;
    string isbn;
    int id;
    double averageRating;
    User author;
    double sumR ;
    int rating;
    int numOfRatings;
public:
    static int count;
    Book();
    Book(const Book& book);
    Book(string title,string isbn, string category);
    void setTitle(string title);
    string getTitle();
    void setISBN(string isbn);
    string getISBN();
    void setId(int id);
    int getId();
    void setCategory(string category);
    string getCategory();
    void setAuthor(User&);
    User& getAuthor();
    void rateBook(int rating);
    bool operator==(const Book& book);
    friend ostream &operator<<(ostream &output, const Book &book );
    friend istream &operator>>( istream &input, Book &book );
};

#endif // BOOK_H
