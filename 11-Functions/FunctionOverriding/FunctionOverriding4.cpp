//Program To Demo Calling of overridden function within an overridding function 
//using scope resolution operator.
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
    XYZ::display();
  }
};
int main() {
  ABC a1;
  a1.display(); //call the overridding function
  return 0;
}