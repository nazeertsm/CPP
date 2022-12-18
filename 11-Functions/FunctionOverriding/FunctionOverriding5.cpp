// Program to demo accessing of overridden function using pointer
// of Base type that points to an object of Derived class
#include<iostream>

using namespace std;
class XYZ {
  public:
    void display() //overridden function
  {
    cout << endl << "I am in class XYZ" << endl;
  }
};
class ABC: public XYZ {
  public: 
   void display() 
  {
    cout << endl << "I am in class ABC";
  }
};
int main() {
  ABC a1;
  //ptr is pointer of XYZ(Base) type that points to a1
  XYZ * ptr = & a1;
  //Here we are calling display function of XYZ using ptr
  ptr -> display();
  return 0;
}