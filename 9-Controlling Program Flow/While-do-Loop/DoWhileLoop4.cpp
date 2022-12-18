#include <iostream>
using namespace std;

int main()
{

    const int COUNT{0};
    size_t i{0}; // Iterator declaration

    do
    {
        cout << i << " : I love C++" << endl;
        ++i; // Incrementation
    } while (i < COUNT);

    cout << "Loop done!" << endl;

    return 0;
}