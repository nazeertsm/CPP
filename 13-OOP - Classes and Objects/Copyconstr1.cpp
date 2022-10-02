#include <iostream>
using namespace std;

class Person
{

    int age;
    int rank;

public:
Person(){

}
    Person(int a, int r)
    {
        age = a;
        rank = r;
    }

Person(const Person &P){
    
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
};

int main()
{

    Person p1(20, 23);
    Person p2 = p1;
    cout << "First" << p1.getAge() <<" "<<p1.getRank()<< endl;
    cout << "Second" << p2.getAge() <<" "<<p2.getRank()<< endl;
    Person p3;

    return 0;
}