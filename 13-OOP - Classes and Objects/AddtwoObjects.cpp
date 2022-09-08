#include "Demo.h"
#include<iostream>
using namespace std;
class Complexs {
private:
	int real;
	int img;

public:

	void set(int r, int i)
	{

		real = r;
		img = i;
	}

	void print(Complexs c) {

		cout << real << " +" << img << "i" << endl;  //default it takes c1 object--implicitly passed c1 object
		cout << c.real << " +" << c.img << "i" << endl; //since passed c2 object  this is for c2 oblect-explictly pased object


	}

	void  add(Complexs c) {

		cout << real + c.real << " + " << img + c.img << " i" << endl;
		
	}


};

int main() {

	Complexs c1;
	Complexs c2;
	c1.set(10, 20);
	c2.set(20, 30);
	c1.print(c2);
	c1.add(c2);
 
	}
