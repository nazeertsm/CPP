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

    Person operator++() // Pre increment
    {
        Person temp;
        temp.rank = ++rank;
        temp.age = ++age;
        return temp;
    }


    Person operator++(int dummy) //post increment
    {
        Person temp;
        temp.rank = rank++;
        temp.age = age++;
        return temp;
    }

    void display()
    {

        cout << "Person age:  " << age << " and Rank:  " << rank << endl;
    }

    //friend void operator<<(ostream &os, Person P); //    cout<<p3;
    friend ostream& operator<<(ostream &os, Person P); //cout<<p3<<c1;

};

/*
void operator<<(ostream &os, Person P){    //    cout<<p3;
   os << "operator called"<< endl;
   os << "Person age:  " << P.age << " and Rank:  " << P.rank << endl;
   } */

ostream& operator<<(ostream &os, Person P){    //   cout<<p3<<c1; 
   os << "operator called"<< endl;
   os << "Person age:  " << P.age << " and Rank:  " << P.rank << endl;
   return os;
   
   } 


int main()
{

    Person p1(20, 23);
    Person p2 = p1;
    Person p3 = p1 + p2;
    (++p3).display();
    (p3++).display();
    (p3++).display();
    (p3++).display();

    cout<<p3;
    cout<<p3<<p1;

    cout << "First" << p1.getAge() << " " << p1.getRank() << endl;
    cout << "Second" << p2.getAge() << " " << p2.getRank() << endl;
    cout << "Third" << p3.getAge() << " " << p3.getRank() << endl;

    return 0;
}