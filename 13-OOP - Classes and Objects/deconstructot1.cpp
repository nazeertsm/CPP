#include <iostream>
using namespace std;
class Complex
{
private:
	int a;
	int b;

public:

Complex(){a=0; b=0;}
Complex(int x){a=x; b=0;}
Complex(int x, int y){a=x; b=y;}

Complex (Complex &C){
	a=C.a;
	b=C.b;

}

~Complex(){cout<<"destructor"<<endl;} //destructor
void setData(int x, int y){a=x; b=y;}
void showData(){cout << "real=" << a << " img=" <<b<< endl;}
Complex add(Complex C){
	Complex temp;
		temp.a = a + C.a;
		temp.b = b + C.b;
		return temp;
}
	
};

int main()
{

	Complex c1(6,4), c2(5), c3;
	c1.showData();
	c2.showData();
	c3.showData();
	Complex c5=c1; //Copy constructor
	
}
