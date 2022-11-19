#include <iostream>
using namespace std;

int main()
{
    int i, n;

    int student[5];
    cout << "Enter number of students" << endl;
    cin >> n;

    // input
    cout << "Enter students marks" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> student[i];
        student[i] = student[i] * 10;
    }
    // output
    for (i = 0; i < n; i++)
    {

        cout << student[i] << ", ";
    }

    return 0;
}