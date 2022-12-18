#include<iostream>

using namespace std;
class XYZ {
  public:
    void display() //overridden function
  {
    cout << "I am in class XYZ";
  }
};
class ABC: public XYZ {
  public: 
    void display() //overriding function
  {
    cout << "I am in class ABC";
  }
};
int main() {
  XYZ x1;
  x1.display(); //Here the overriden function of base class is called.
  return 0;
}