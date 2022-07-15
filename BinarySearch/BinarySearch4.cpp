// C++ program to implement iterative Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{

    int e = r - 1;

    while (l <= e)
    {
        int mid = (l + e) / 2;

        if (arr[mid] == x)
        {

            return mid;
        }

        else if (arr[mid] > x)
        {

            e = mid - 1;
        }

        else
        {

            l = mid + 1;
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}