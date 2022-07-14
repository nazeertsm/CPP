#include <iostream>
using namespace std;

enum ice_cream
{
    vanila,
    chocolate,
    straberry,
    Mango

};

void choose_ice(ice_cream ice)
{

    if (ice == vanila)
    {
        cout << "you choosen  " << ice << endl; // 3
    }

    else if (ice == chocolate)
    {

        cout << "you choosen  " << ice << endl; // 3
    }

    else if (ice == straberry)
    {

        cout << "you choosen  " << ice << endl; // 3
    }

    else if (ice == Mango)
    {

        cout << "you choosen  " << ice << endl; // 3
    }

    else

        cout << "please use proper value"<<endl;
}

int main()
{
    choose_ice(straberry); //mycomm: before passing enum values are validating

    return 0;
}
