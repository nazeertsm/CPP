#include <iostream>
using namespace std;

int main()
{

    int *int_ptr{nullptr};

    int_ptr = new int; // Allocate an integer an heap, and heap address will be stored in "int_ptr"
    // once allocate the heapm,   after use, we need to delete the memory from Heap

    cout << int_ptr << endl; // 0x6d61f0s Memory location(Display the Mem location where the integer in Heap)

    cout << *int_ptr << endl; //  7169376 Garbage value

    *int_ptr = 100;

    cout << *int_ptr << endl; // 100

    delete int_ptr; // frees the allocated storage

    cout << "\n--------------------------------" << endl;

    size_t size{0};

    double *temp_ptr{nullptr};

    cout << "How many temps?" << endl;

    cin >> size;

    temp_ptr = new double[size]; // The first value of heap memory location stored in to temp_ptr
    
    cout << temp_ptr << endl;

    delete [] temp_ptr; // frees the allocated storage

    cout << "\n--------------------------------" << endl;



    return 0;
}
