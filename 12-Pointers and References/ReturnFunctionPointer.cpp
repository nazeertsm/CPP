#include <iostream>
using namespace std;

/*functions also return pointers, function will return an address of whatever type we specified in the function,
    In this function, we're returning a pointer to an integer.
    */

int *larget_int(int *int_ptr1, int *int_ptr2)
{

    if (*int_ptr1 > *int_ptr2)

        return int_ptr1;

    else
        return int_ptr2;
}

int main()
{

    int a{100};
    int b{200};

    int *largest_ptr{nullptr};
    //pass in the addresses of a and b.
    //The function returns a pointer, which I assign to a variable named largest_ptr
    largest_ptr = larget_int(&a, &b);
    
    //de-reference the pointer, and it displays 200.
    cout << *largest_ptr << endl;

    return 0;
}
