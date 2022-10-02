#include <iostream>
using namespace std;

class Person
{

    int age;
    int rank;

public:
    Person()
    {
        cout << "default constructor" << endl;
    }
    Person(int a, int r)
    {
        cout << "parameterized constructor" << endl;
        age = a;
        rank = r;
    }

    Person(const Person &P)
    {
        cout << "copy constructor" << endl;

        age = P.age;
        rank = P.rank;
    }
    int getAge()
    {

        return age;
    }

    int getRank()
    {

        return rank;
    }

    Person operator+(Person P)
    {
        cout << "operator constructor" << endl;
        Person temp;
        temp.age = age + P.age;
        temp.rank = rank + P.rank;
        return temp;
    }
};

int main()
{

    Person p1(20, 23);
    cout << "......................" << endl;
    Person p2 = p1;
    cout << "......................" << endl;
    cout << "First" << p1.getAge() << " " << p1.getRank() << endl;
    cout << "......................" << endl;
    cout << "Second" << p2.getAge() << " " << p2.getRank() << endl;
    cout << "......................" << endl;
    Person p3 = p1 + p2;
    cout << "......................" << endl;
    cout << "Third" << p3.getAge() << " " << p3.getRank() << endl;
    cout << "......................" << endl;
    return 0;
}