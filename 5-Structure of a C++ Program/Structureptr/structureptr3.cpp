#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{

int length;
int breadth;


};

int main(){


    struct Rectangle *P;
    //type casting into a rectangle type structure pointer then assign it to be.
    //This is how we can allocate object of type this rectangle in here.

    P = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    P->length=10;
    P->breadth=5;
    cout<<P->length<<endl;
    cout<<(*P).length<<endl;
            
    return 0;
    
}