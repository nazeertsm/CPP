//Program to demonstrate concept of function overriding.
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
  ABC a1;
  a1.display(); //Here the overriding function of derived class is called.
  return 0;
}