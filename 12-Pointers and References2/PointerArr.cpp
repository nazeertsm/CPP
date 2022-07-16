#include <iostream>
using namespace std;

int main()
{

    int A[5] = {2, 34, 45, 6, 8};

    int *ptr;
    ptr = A; // Name of the array itself address of first element

    for (int &i : A)
        cout << i << endl;

    cout << "\n------------------" << endl;

    for (int x = 0; x < 5; x++)
    {

        cout << A[x] << endl;
        // cout << ptr[x] << endl;
    }
}