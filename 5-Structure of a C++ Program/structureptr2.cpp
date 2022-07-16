#include<iostream>
using namespace std;

struct Rectangle{

int length;
int breadth;


};

int main(){


    struct Rectangle r={10,5};//declare variable of type structure and initialize the values of length and breadth
    struct Rectangle *P = &r;
    r.length=15;
   /* But this is wrong because the higher precedence is for DOT operators.
    it will take it as a P dot length again, it is wrong. So I should enclose this inside the bracket.(*P).length;
   (*P).length; 
   
   /*The Dot(.) operator is used to normally access members of a structure or union.
    The Arrow(->) operator exists to access the members of the structure or the unions using pointers.
    (pointer_name)->(variable_name)*/
    P->length=20;
        
    return 0;
    
}