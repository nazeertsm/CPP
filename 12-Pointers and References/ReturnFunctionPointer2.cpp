#include <iostream>
using namespace std;

int *create_array(size_t size, int init_value = 0)
{

    int *new_storage{nullptr};

    new_storage = new int[size]; // integers will be allocated dynamically on the heap, not on the stack.

    for (size_t i = 0; i < size; ++i)

        *(new_storage + i) = init_value;

    return new_storage;
}

void display(const int *const array, size_t size)
{

    for (size_t i = 0; i < size; ++i)

        cout << array[i] << endl;
    cout << endl;
}

int main()
{
    int *my_array{nullptr};
    size_t size;      // We have size, which contains garbage right now.
    int init_value{}; // we have init value, which is zeroed out at the moment.

    cout << "\n How many integers would you like to allocate:?";
    cin >> size;

    cout << "What value would you like them to initialize to";
    cin >> init_value;

    my_array = create_array(size, init_value);
    cout << "\n--------------------------------" << endl;

    display(my_array, size);
    delete[] my_array;

    return 0;
}
