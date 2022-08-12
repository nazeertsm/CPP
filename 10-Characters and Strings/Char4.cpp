#include <iostream>
#include <ctype.h> //for charactor based function
#include <cstring> //for cstyle string function

using namespace std;
int main()
{

    char full_name[50]{};
    char temp[50]{};

    cout << "Please enter your full_name: " << endl;
    cin.getline(full_name, 50); // So this will stop either at 50 if you reach the max or  when the user presses enter.

    cout << "your full_name is: " << full_name << endl;
    strcpy(temp, full_name);

    if (strcmp(temp, full_name) == 0)

        cout << temp << " and " << full_name << "are same" << endl;
    else
        cout << temp << " and  " << full_name << "are not same" << endl;

    return (0);
}
