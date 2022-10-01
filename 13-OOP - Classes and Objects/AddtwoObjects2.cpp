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

		cout << "real=" << a << " img=" <<b<< endl;
	}

	Complexs add(Complexs C)
	{
		Complexs temp;
		temp.a = a + C.a;
		temp.b = b + C.b;
		return temp;
	}
};

int main()
{

	Complexs c1, c2, c3;
	c1.setData(3, 4);
	c2.setData(5, 6);
	c3 = c1.add(c2);
	c3.showData();
}
