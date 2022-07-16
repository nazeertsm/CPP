#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{

int length;
int breadth;


};

int main(){


    //struct Rectangle r={10,5};//declare variable of type structure and initialize the values of length and breadth

    Rectangle r={10,5};//C++ programs struct is not mandatory in the C programs struct as mandatory.

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    Rectangle *ptr=&r;   // pointer to structure = assign the address of an object of type rectangle.
    cout<<"\n.........."<<endl;
    cout<<ptr->length<<endl;
    cout<<ptr->breadth<<endl;


     

    return 0;
    
}