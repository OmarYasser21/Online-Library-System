#include "Book.h"
#include "User.h"

int Book::count=0;
//default constructor
Book::Book()
{
    setId(++count);
    numOfRatings = 0;
    averageRating =0.0;
    sumR=0.0;

}
//constructor
Book::Book(string ti, string is, string cat):title(ti),isbn(is),category(cat)
{
    setId(++count);
}
//copy constructor
Book::Book(const Book& book)
{
    title = book.title;
    isbn = book.isbn;
    category = book.category;
    setId(++count);
}
//Mutator function
void Book::setTitle(string ti)
{
    title = ti ;
}
//Accessors function
string Book::getTitle()
{
    return title ;
}
//Mutator function
void Book::setISBN(string is)
{
    isbn = is;
}
//Accessors function
string Book::getISBN()
{
    return isbn;
}
//Mutator function
void Book::setId(int i)
{
    id = i ;
}
//Accessors function
int Book::getId()
{
    return id ;
}
//Mutator function
void Book::setCategory(string cat)
{
    category = cat ;
}
//Accessors function
string Book::getCategory()
{
    return category ;
}
//Mutator function
void Book::setAuthor(User& auName)
{
    author = auName;
}
//Accessors function
User& Book::getAuthor()
{
    return author;
}
// == operator overloading to check if any of the books are equal
bool Book::operator==(const Book& book)
{
    bool status;
    if (title==book.title && isbn==book.isbn && category==book.category)
        status=true;
    else
        status=false;
}
// function to calculate the average rating of the book
void Book::rateBook(int ra)
{
    rating = ra;
    sumR=sumR+rating;
    averageRating = sumR/++numOfRatings;

}
// << operator overloading to print outputs
ostream &operator<<(ostream &output, const Book &book)
{
    output<<endl<<"Title : "<<book.title<< "|" <<"ISBN "<<book.isbn<<"|"<<"Id :"<<book.id<< "|" <<"Category : "<<book.category<<"|"<<"AVGRATING : "<<book.averageRating;
    return output;
}
// >> operator overloading to get inputs
istream &operator>>( istream &input, Book &book )
{
    cin>>book.title;
    cin>>book.isbn;
    cin>>book.category;
    return input;
}
