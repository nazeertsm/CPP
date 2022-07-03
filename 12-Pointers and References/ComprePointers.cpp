#include <iostream>
using namespace std;

int main()
{

    string s1{"Nazeer"};
    string s2{"Nazeer"};

    string *p1{&s1}; //  p1 pointing s1 address
    cout << "p1 " << p1 << endl;

    string *p2{&s2}; //  p2 pointing s2 address
    cout << "p2 " << p2 << endl;

    string *p3{&s1}; //  p3 pointing s1 address
    cout << "p3 " << p3 << endl;
    // p1 and p3 pointing the same address

    // comparing the address
    cout << (p1 == p2) << endl; // false 0
    cout << (p1 == p3) << endl; // true  1

    // comparing data pointers
    cout << (*p1 == *p2) << endl; // true 1 , Two pointers pointing to the same data
    cout << (*p1 == *p3) << endl; // true  1  Two pointers pointing to the same data

    return 0;
}
