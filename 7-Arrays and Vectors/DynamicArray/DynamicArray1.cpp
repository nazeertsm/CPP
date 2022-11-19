#include<iostream>
using namespace std;

int main(){

    int *ptr1 = NULL; //Pointer initialized with NULL
    ptr1 = new int;

    int *ptr2 = new int; //combine declaration aof pointer and their assignment--single 4 bytes memory created

    //pointer-variable = new data-type[size];
    int *p = new int[20]; // Memory created in Heap, Base address assigned to p pointer
    *p=120;
    cout<<"the value of p is : "<<*p<<endl;
    cout<<"the address of p is : "<<p<<endl;
    
    delete[]p;
    p=NULL;
    cout<<"the value of p after memory delete : "<<*p<<endl; //Cannot access the value, since Memory deleted and reference also
    cout<<"the address of p after memory delete: "<<p<<endl;
    
    
}