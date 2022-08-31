#include <iostream>
using namespace std;

float radiousofcircle(float r);

int main()
{

    int r;
    cout << "Enter the radius" << endl;
    cin >> r;
    float result = radiousofcircle(r);

    cout << "The radius of the circle is " << result << endl;
}

float radiousofcircle(float r)
{

    return 3.14159 * r * r;
}