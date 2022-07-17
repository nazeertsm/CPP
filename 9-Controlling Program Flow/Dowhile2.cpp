#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = -1, c;

    do
    {

        c = a + b + 1;
        printf("%d ", c);
        a = b + 1;
        b = a + 1;

    } while (c < 10);
}

// 2 2 6 10