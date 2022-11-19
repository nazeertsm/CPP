#include <stdio.h>

int main()
{

    int i, sum = 0;
    int a[3] = {10, 30, 3};

    for (i = 0; i < 3; i++)
    {
        sum= sum+a[i];
    }

    printf(" sum of array %d", sum);
}
