#include <iostream>
using namespace std;

int Linear_search(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        //check if the current element matches with key
        if (arr[i] == key)
        {

            return i;
        }
      
    }
    //out of the loop
      return -1;
}

int main()
{

    int key, index, n;
    int arr[] = {12, 34, 11, 6, 77, 89};

    n = sizeof(arr) / sizeof(int);

    cout << "Enter the key to search" << endl;

    cin >> key;

    index = Linear_search(arr, n, key);

    if (index != -1)
        cout << "element found at the index " << index << endl;

    else
        cout << "element not found" << endl;

    return 0;
}