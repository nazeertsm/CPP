#include <iostream>
using namespace std;
/* What is a structure? A structure is a user-defined data type in C/C++. A structure creates a data type
that can be used to group items of possibly different types into a single type. */

struct Rectangle
{ // 1. structure definition, it does not take memory

    int length;
    int breadth;
} r3; // we can declare the variable along with definition also,
              //  So this will become a global variable which will be accessible to all the function.

struct Rectangle r2; /* we can declare the variable out side main also*/
/*This will be available or accessible for all the function in your program.*/

int main()
{

    
    struct Rectangle r1 = {12,5};
    
    r2.length = 10; // 3. dot operator used for accesing the member
    r2.breadth = 5;

    r3.length = 25;
    r3.breadth = 20;

    printf("Area of the Rectangle r1 is %d\n", r1.length * r1.breadth);
    printf("Area of the Rectangle r2 is %d\n", r2.length * r2.breadth);
    printf("Area of the Rectangle r3 is %d\n", r3.length * r3.breadth);

    return 0;
}