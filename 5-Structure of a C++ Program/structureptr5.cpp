#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle
{

    int length;
    int breadth;
};

int main()
{

    // how to create an object of rectangle that is this rectangle structure

    Rectangle *ptr; // pointer is declared inside the stack

    /*malloc function allocate the memory
    malloc function return void, So we should typecasts it as struct rectangle pointer
    Here a rectangle object will be created in a heap and the pointer will be pointing on it
    dynamic allocation of Rectangle structure.*/

    ptr = (struct Rectangle *)malloc(sizeof(struct Rectangle));  // c lang
    //ptr = new Rectangle;  // c++ lang

    ptr->length=10;
    ptr->breadth=5;

    cout<<ptr->length<<endl;

    return 0;
}