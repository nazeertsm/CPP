#include <stdio.h>

int main()
{

    int num[10], i, se = 0, so = 0;
    printf("Enter 10 numbers");

    for (int i = 0; i < 9; i++)

        scanf("%d", &num[i]);

    for (i = 0; i < 9; i++)
    {
        if (num[i] % 2 == 0)

            se = se + num[i];
        else
            so = so + num[i];
    }

    

    printf("\n sum of all even numbers: %d", se);
    printf("\n sum of all odd numbers: %d", so);

    printf("\n");

    return 0;
}