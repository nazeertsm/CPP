// { Driver Code Starts
// Initial template for C++

#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int k)
{

    // code here

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == k)
        {

            return mid;
        }

        else if (arr[mid] > k)
        {

            end = mid - 1;
        }

        else
        {

            start = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {3, 4, 7, 12, 67, 98};

    int k = 12;

    int n = sizeof(arr) / sizeof(int);

    int result = binarysearch(arr, n, k);

    if (result == -1)
    {

        cout << "Element not found in arry" << endl;
    }

    else
    {

        cout << "element present at index" << result;
    }
}
