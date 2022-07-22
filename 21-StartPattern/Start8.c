#include <stdio.h>

int main()
{

    int i, j, n = 5;

    for (j = 0; j < n; j++)
    {

        for (i = 0; i < j; i++)
        {

            printf("*");
        }
        printf("\n");
    }
}