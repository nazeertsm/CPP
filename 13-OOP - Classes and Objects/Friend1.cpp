#include <iostream>
using namespace std;
class Item
{
private:
	int a;
	int b;

public:
	friend void f1(); // friend function
	friend void f2();
};

class Hello
{
public:
	void f2();
};

// friend function definition
void f1()
{
	cout << "I am inside f1 function, i am not member of item class" << endl;
}

void Hello::f2()
{
	cout << "f2 func is Hello class member" << endl;
}

int main()
{

	Item i1;
	Hello i2;

	f1();	 // calling f1 function, f1 is not a member of class Item, we can directly call
	i2.f2(); // f2 is Hello class member, accessing using dot operator

	return 0;
}
