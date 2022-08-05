#include <iostream>
using namespace std;

// printArray method accept the array
void printArray(int arr[], int n) 

// or void printArray(int *arr)
{

    cout << "In function" << sizeof(arr) << endl;
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};

    cout << "Main function" << sizeof(arr) << endl;
    int n = sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    printArray(arr, n); //passing by reference(Address of first element), not value, 
    //Receive method variable should be pointer(since pointer can only store address)

    return 0;
}

//****N