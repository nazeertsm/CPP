#include <iostream>

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto val : arr)
    {

        // val holds copy of current iteration in arr, values not modified
        std::cout << "result : " << (val * 2) << std::endl;
    }

    for (auto i = 0; i < 10; i++)
    {
        std::cout << arr[i] << std::endl; //{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};, act avalues not changed
    }

    return 0;
}