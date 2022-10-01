#include <iostream>
using namespace std;
class Complexs
{
private:
	int a;
	int b;

public:
	void setData(int x, int y)
	{

		a = x;
		b = y;
	}

	void showData()
	{

		cout << "real=" << a << " img=" << b << endl;
	}

	friend Complexs operator+(Complexs, Complexs);
	friend Complexs operator-(Complexs);

	Complexs operator+(int k)
	{

		Complexs temp;
		temp.a = a + k;
		temp.b = b + k;
		return temp;
	}

	friend Complexs operator+(int k, Complexs X)
	{
		Complexs temp;
		temp.a = X.a;
		temp.b = X.b;
		return temp;
	}
};

Complexs operator+(int, Complexs);

Complexs operator+(Complexs X, Complexs Y)
{
	Complexs temp;
	temp.a = X.a;
	temp.b = X.b;

	return temp;
}

Complexs operator-(Complexs X)
{
	Complexs temp;
	temp.a = -X.a;
	temp.b = -X.b;
	return temp;
}

int main()
{

	Complexs c1, c2, c3, c4;
	c1.setData(3, 4);
	c2.setData(5, 6);
	c3 = c1 + c2; // c3=operator+(c1,c3)
	c3.showData();
	c4 = -c3; // c4 = operator-(c3);
	c4.showData();
	c3 = c1 + 5; // calling c1, 5 as argument
	c3 = 5 + c1;
}
