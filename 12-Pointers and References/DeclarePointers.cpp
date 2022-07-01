#include<iostream>
using namespace std;

int main(){

/* Declaring pointers
variable_type *pointername;

initializing the pointer variable, if you dont initialize the pointer variable, it will have the garbage data
variable_type *pointername {nullptr};

*/
int *int_ptr{};//output 0
int *int_ptr1;   //0x401519x
// if you dont initialize a pointer ti point a variable or function then you should initialize it to "nullptr" to make it "null"
// implies pointer is pointing nowhere

int *int_ptr2{nullptr}; //output 0
double *double_ptr{nullptr};
char *char_ptr{nullptr};
string *String_ptr;

cout<<int_ptr<<endl;
cout<<int_ptr1<<endl;
cout<<int_ptr2<<endl;
cout<<"Hello"<<endl;
cout<<char_ptr<<endl;

return 0;



}