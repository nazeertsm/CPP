#include <iostream>
#include <string.h>
using namespace std;

class Book
{
    private:
    int bookid;
    char title[20];
    float price;
    
    public:
    void displayBook()
    {
        cout << bookid << " " << title << " " << price << endl;
    }

    // defination
    void inputBook() 
    {

        cout << "Enter bookid, title, price" << endl;
        cin >> bookid;
        if(bookid<0)  //added condtion to handle negative bookid
        bookid = -bookid;
        // before string input fflush required
        cin.ignore();
        cin.getline(title, 20);
        cin >> price;
    }
};


int main()
{

    Book b1,b2, b3;

    b1.inputBook();
    b2.inputBook();
    b3.inputBook();

    // display book
    b1.displayBook();
    b2.displayBook();
    b3.displayBook();
    cout << endl;

    return 0;
}
