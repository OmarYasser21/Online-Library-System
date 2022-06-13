#include "BookList.h"
#include<cstring>
#include<iostream>
using namespace std;

BookList::BookList(const BookList& anotherList)
{
    capacity=anotherList.capacity;
    booksCount=anotherList.booksCount;
    books=new Book[capacity];
    for(int i=0;i<capacity;i++){
        books[i]=anotherList.books[i];
    }

}
BookList::BookList(int capacity)
{
    this->capacity=capacity;
    booksCount=0;
    books=new Book[capacity];

}
Book& BookList::searchBook(string name)
{
    for(int i=0;i<booksCount;i++){
        if(name=books[i].name){
            cout<< "Title: "<<books[i].getTitle()<<endl;
            cout<< "ISBN: "<<books[i].getISBN()<<endl;
            cout<< "ID: "<<books[i].getId()id<<endl;
            cout<< "Category: "<<books[i].getCategory()<<endl
            cout<< "Average Rating: "<<books[i].averageRating<<endl;
            cout<< "Author: "<<books[i].getAuthor()<<endl;
            }
        }
        return nullptr;
}
Book& BookList::searchBook(int id)
{
    for(int i=0;i<booksCount;i++){
        if(id=books[i].id){
            cout<< "Title: "<<books[i].getTitle()<<endl;
            cout<< "ISBN: "<<books[i].getISBN()<<endl;
            cout<< "ID: "<<books[i].getId()<<endl;
            cout<< "Category: "<<books[i].getCategory()<<endl
            cout<< "Average Rating: "<<books[i].averageRating<<endl;
            cout<< "Author: "<<books[i].getAuthor()<<endl;
            }
        }
        return nullptr;
}
void BookList::deleteBook(int id)
{
    for(int i=0; i<booksCount; i++){
        if(id=books[i].id){
            books[i]=books[i-1];
            booksCount-- ;
        }

    }
}
 Book BookList::getTheHighestRatedBook()
 {
     int max= -999 ;
     int index;
     for(int i=0;i<booksCount;i++){
         if(books[i].rating>max){
            max=books[i].rating;
            index=i;
         }

     }
     return books[index];
 }
 Book* BookList::getBooksForUser(User)
 {
 Book arr[booksCount];
    int c=0;
    for(i=0;i<booksCount;i++){
        if(books[i].authour==User{
            arr[c++]=books[i].author;
        }
    }
    return *arr[];
 }
 Book & BookList::operator [ ] (int position)
 {
     if(position>=0 || position<booksCount){
        return books[position];
     }
     else {
        cout<< "invalid index"<<endl;
     }
 }
ostream &operator<<( ostream &output, BookList &booklist )
{
    for(int i=0;i<bookList.booksCount;i++){
            output<< "Title: "<<bookList[i].getTitle<<endl;
            output<< "ISBN: "<<booklist[i].getIsbn<<endl;
            output<< "ID: "<<booklist[i].getId<<endl;
            output<< "Category: "<<booklist[i].getCategory<<endl;
            output<< "Average Rating: "<<booklist[i].averageRating<<endl;
            output<< "Author: "<<booklist[i].getAuthor<<endl;
    }
}
BookList::~BookList()
{
    delete[] books;
}
