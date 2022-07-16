#include<iostream>
using namespace std;

struct Point{

int x,y;


};

int main(){

    struct Point p1= {34, 45}; ////declare variable of type structure and initialize the values of x,y

    // p2 is a pointer to structure p1
    struct Point *p2{&p1};
   //struct Point *p2= &p1;

    // Accessing structure members using structure pointer
    
    /*The Dot(.) operator is used to normally access members of a structure or union.
    The Arrow(->) operator exists to access the members of the structure or the unions using pointers.
    (pointer_name)->(variable_name)*/

    cout<<p2->x<<" "<<p2->y<<endl;

    return 0;
    
}