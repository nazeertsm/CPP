#include<iostream>
using namespace std; 
  
class PrepInsta 
{
    int *var;
    public:

    // Parmeterized constructor
    PrepInsta(int x) {
        var = new int;
        *var = x; 
    }
    
    // setter
    void setValue(int val){
        *var = val;
    }
    
    // getter
    int getValue(){
        return *var;
    }
  
    // the compiler would create its own hidden copy constructor
    // as we have not created our own user defined copy constructor here
    // shallow copy will happen i.e. objects variables etc will share memory

}; 
  
int main() 
{
    // calling the normal constructor
    PrepInsta obj1(10);
    
    // calling default copy constructor of compiler (Shallow Copy)
    PrepInsta obj2 = obj1; 
  
    cout << "Before value change - " << endl;
    
    // printing the values, assigned by constructors
    cout << "obj1.var = " << obj1.getValue() << endl; 
    cout << "obj2.var = " << obj2.getValue() << endl;
    
    obj1.setValue(20);
    
    cout << "\nAfter value change - " << endl;
    
    // printing the values, assigned by constructors
    cout << "obj1.var = " << obj1.getValue() << endl; 
    cout << "obj2.var = " << obj2.getValue() << endl;
    
    // since we did shallow copy as we didnt make any
    // user defined copy constructor
    // change in obj1 is reflected in obj2

    return  0; 
}