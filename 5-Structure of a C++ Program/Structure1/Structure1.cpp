#include <iostream>
using namespace std;
/* What is a structure? A structure is a user-defined data type in C/C++. A structure creates a data type
that can be used to group items of possibly different types into a single type. */

struct Rectangle
{ // 1. structure definition, it does not take memory

    int length;
    int breadth;
};

int main()
{

    struct Rectangle r1; // 2. structure declration (memory wiil be assigned in declaration)
    // struct Rectangle r2{10,7}; // structure declration and initialization

    r1.length = 10; // 3. dot operator used for accesing the member
    r1.breadth = 5;

    printf("Area of the Rectangle is %d", r1.length*r1.breadth);

    return 0;
}