#include <iostream>
using namespace std;

class Item
{

public:
    int a, b;     // Instance Member variable
    static int k; // static member variable

    void setA(int x) { a = x; }
    void setB(int y) { b = y; }
    int getA() { return a; }
    int getB() { return b; }

    static void setK(int z) { k = z; }
    static int getK() { return k; }
};

int Item::k; // define startic variable, if we dont define outside the Memory will not be allocated
// int Item::k = 20; // we can assign the value, if not assigned bydefault value is zero.

int main()
{

    /**************************************************************************
        Item i1, i2;
        i1.a = 5;
        cout << "a=" << i2.a << endl; // garbage value
        i1.k = 4;
        cout << "k=" << i2.k << endl; //acccesing with object, but this not good approarch, since if object not object, we cannot access the k value
    ***************************************************************************/
    Item::setK(4); // dont use dot, we are not accessing via object, Accesing fron class
    cout << "k=" << Item::getK() << endl;
    return 0;
}