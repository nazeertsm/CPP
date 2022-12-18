#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    int a, b, c;

    printf("1. Addition");
    printf("2. Subtraction");
    printf("3. Multiplication");
    printf("4. Exit");

    printf("Enter operation");
    scanf("%d", &n);

    printf("Enter the value of a and b");
    scanf("%d%d", &a & b);

    switch (n)
    {
    case 1:
        c = a + b;
        printf("%d", c);
        break;
    case 2:
        c = a - b;
        printf("%d", c);
        break;
    case 3:
        c = a * b;
        printf("%d", c);
        break;
    case 4:
        break;

    default:
        break;
    }
}
