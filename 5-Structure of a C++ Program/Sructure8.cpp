#include <iostream>
#include <string.h>
using namespace std;
// C++ Structure not mandatory except struct declaration
// c++ we can write function inside struct decl
struct Book
{
    int bookid;
    char title[20];
    float price;
    void displayBook()
    {
        cout << bookid << " " << title << " " << price << endl;
    }

    // defination

    void inputBook() // retrun type struct
    {

        cout << "Enter bookid, title, price" << endl;
        cin >> bookid;
        // before string input fflush required
        cin.ignore();
        cin.getline(title, 20);
        cin >> price;
    }
};

// Book inputBook(); // declaration not required, since inputBook() function written before Main methid
// void displayBook(Book); // // declaration not required-passing book type argument

int main()
{

    Book b1 = {1, "C", 425.0f};
    Book b2, b3;

    b2.bookid = 2;
    strcpy(b2.title, "CPP");
    b2.price = 324.0f;
    b3.inputBook();

    // display book
    b1.displayBook();
    b2.displayBook();
    b3.displayBook();
    cout << endl;

    return 0;
}
