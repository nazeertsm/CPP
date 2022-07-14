#include <iostream>
using namespace std;

struct student1
{

    int rollNo;
    char name[20];
    float marks;
    char grade;
};

struct Point
{
    //// It is Considered as Default Arguments and no Error is Raised
    int x = 120;
    int y = 230;
};

int main()
{

    /*an object of type struct student is defined.
    This contains the roll number, name, marks and grade values. This is shown as follows.*/

    struct student1 s1 = {10, "Ahmed", 90, 'A'};

    cout << s1.rollNo << endl;
    cout << s1.name << endl;

    struct Point p1;

 // Accessing members of point p1
// No value is Initialized then the default value is considered. ie x=0 and y=1;
    cout << p1.x << endl;   //output: 120

    return 0;
}