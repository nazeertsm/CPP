/*Enum, which is also known as enumeration, is a user-defined data type that enables you
to create a new data type that has a fixed range of possible values
Enums or enumerations are generally used when you expect the variable
to select one value from the possible set of values. It increases the abstraction and
enables you to focus more on values rather than worrying about how to store them.
It is also helpful for code documentation and readability purposes.*/
#include <iostream>
using namespace std;

enum ice_cream
{
    vanila,
    chocolate,
    straberry,
    Mango

};

int main()
{

    ice_cream ice = chocolate;

    if (ice == Mango)
    {
        cout << "you choosen  " << ice << endl; // 3
    }

    else
    {

        cout << "you choosen  " << ice << endl; // 3
    }

    return 0;
}
