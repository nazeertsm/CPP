#include <iostream>
using namespace std;

int main()
{

    int i = 0;

    while (i <= 6)
    {
        if (i % 2)     // 1(non zero) means true, i=i-3 execute, 0-false means else statement
            i = i - 3; // Every non zero value is true ***;
        else
            i = i + 5;

        printf("%d ", i);
    }

    printf("%d ", i);
}

// output: 5 2 7 7