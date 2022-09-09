#include <iostream>
using namespace std;

class Item
{

public:
    int a, b;     // Instance Member variable
    static int k; // static member variable

    void setData(int x, int y)
    {

        a = x;
        b = y;
    }
    void showData(); // declare method, we can define method outside the class using scope resolution(::) operator(incase need to define Method outside the class, declaration required inside the Method)
};

void Item::showData()
{
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;
}

int main()
{

    Item c1;
    c1.setData(20, 40);
    c1.showData();

    return 0;
}