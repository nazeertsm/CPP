#include <iostream>
using namespace std;

enum Days
{

    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{

    Days day = Sunday;

    switch (day)
    {
    case Sunday:
        cout << "Sunday!" << endl;
        break;
    case Monday:
        cout << "Monday!" << endl;
        break;
    case Tuesday:
        cout << "Tuesday!" << endl;
        break;
    case Wednesday:
        cout << "Wednesday!" << endl;
        break;
    case Thursday:
        cout << "Thursday!" << endl;
        break;
    case Friday:
        cout << "Friday!" << endl;
        break;
    case Saturday:
        cout << "Saturday!" << endl;
        break;

    default:
        break;
    }

    return 0;
}
