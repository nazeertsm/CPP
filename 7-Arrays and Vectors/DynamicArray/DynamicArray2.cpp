#include<iostream>
using namespace std;

int main(){


int *p1  = new int();
cout<<*p1<<endl;  // zero or garbage value, since the value not assighned during initialization

//pointer-variable = new data-type(value);
int *p2  = new int(25); 
cout<<*p2<<endl;  //25


}