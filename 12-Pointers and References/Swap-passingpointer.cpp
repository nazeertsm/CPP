#include <iostream>
using namespace std;

void swap(int *int_ptr1, int *int_ptr2)
{

    int temp = *int_ptr1;

    *int_ptr1 = *int_ptr2;
    *int_ptr2 = temp;
}

int main()
{

    int x{100};
    int y{200};

    cout << "Before swap "<<endl;
    cout << x << endl;
    cout << y << endl;

    swap(&x, &y);

    cout << "After swap "<<endl;
    cout << x << endl;
    cout << y << endl;
    return 0;
}
