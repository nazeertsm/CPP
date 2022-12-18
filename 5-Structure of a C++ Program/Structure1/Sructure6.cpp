#include <iostream>
#include <string.h>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
};

// declaration
struct Book inputBook();
void displayBook(struct Book);//passing book type argument

int main()
{

    struct Book b1 = {1, "C", 425.0f};
    struct Book b2, b3;

    b2.bookid = 2;
    strcpy(b2.title, "CPP");
    b2.price = 324.0f;

    b3 = inputBook();

    //display book
    displayBook(b1);
    displayBook(b2);
    displayBook(b3);
    cout<<endl;

    return 0;


}

void displayBook(struct Book b){
    cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;


}

// defination

struct Book inputBook() // retrun type struct
{ 

    struct Book b;

    cout<<"Enter bookid, title, price"<<endl;
    cin>>b.bookid;
    //before string input fflush required
    cin.ignore();
    cin.getline(b.title, 20);
    cin>>b.price;

    return b;


}