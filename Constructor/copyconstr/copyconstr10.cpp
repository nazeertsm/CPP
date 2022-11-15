// CPP program to initialize a vector reference.
#include <iostream>
#include <vector>
using namespace std;

class MyClass {
	vector<int>& vec;

public:
	// this is the right way to assign
	// the reference of stl container
	MyClass(vector<int>& arr)
		: vec(arr)
	{
	}
	void print()
	{
		/// print the value of vector
		for (int i = 0; i < vec.size(); i++)
			cout << vec[i] << " ";
	}
};

int main()
{
	vector<int> vec;
	for (int i = 1; i <= 5; i++)
		vec.push_back(i);
	MyClass obj(vec);
	obj.print();
	return 0;
}
