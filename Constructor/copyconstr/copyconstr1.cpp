// C++ program to demonstrate the working
// of a COPY CONSTRUCTOR
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

//A copy constructor is a parameterized constructor and it can be used when we want to copy the values of one object to another.
//changes to the values of on object will not affect another object.
	// Copy constructor
	Point(const Point& p1) //const to avoid changes of original values, reference variable (&p1) to avoid recursion loop
	{
		x = p1.x;
		y = p1.y;
	}

	int getX() { return x; }
	int getY() { return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here(&p1)

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX()
		<< ", p2.y = " << p2.getY();
	return 0;
}

/*
When should we write our own copy constructor?

C++ compiler provides default copy constructor (and assignment operator) with class. 
When we don’t provide an implementation of copy constructor (and assignment operator) and 
try to initialize an object with the already initialized object of the same class then copy constructor
 gets called and copies members of class one by one in the target object. 
 */