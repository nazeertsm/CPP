//Program To Demo Calling Of Overriden Base Class Function With Respect To 
//Derived Class 
//Object Using Scope Resolution Operator
#include<iostream>

using namespace std;
class XYZ {
  public:
    void display() //overridden function
  {
    cout << "I am in class XYZ" << endl;
  }
};
class ABC: public XYZ {
  public: 
    void display() //overriding function
  {
    cout << "I am in class ABC" << endl;
  }
};
int main() {
  ABC a1;
  a1.display();
  a1.XYZ::display();
  return 0;
}