#include <iostream>

int main()
{

    int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // This is a collection of integers
    // The variable value will be assigned a value from the values array on each iteration

    for (int value : bag_of_values)
    {
        // value holds a copy of the current iteration in the whole bag
        std::cout << " value : " << value << std::endl;
    }

    return 0;
}