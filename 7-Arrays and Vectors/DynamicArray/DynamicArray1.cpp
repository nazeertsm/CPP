#include<iostream>
using namespace std;

int main(){

    int *p = new int[20];
    *p=120;
    cout<<"the value of p is : "<<*p<<endl;
    cout<<"the address of p is : "<<p<<endl;
    
    delete[]p;
    p=NULL;
    cout<<"the value of p after memory delete : "<<*p<<endl; //Cannot access the value, since Memory deleted and reference also
    cout<<"the address of p after memory delete: "<<p<<endl;
    
    
}