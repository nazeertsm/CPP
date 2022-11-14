#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex(int r = 0, int i = 0) {
        
        real = r;
        imag = i;
        
        }
	
	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator + (Complex const &obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void showData() {
         cout << real << " + i" << imag << '\n'; 
    }

};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;  
	//c3= c1.operator+(c2)-c1 calling + operator as c2 argument and +(plus) returning to c3
	//c1 and c2 should be complex type
	c3.showData();
}
