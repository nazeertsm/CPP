#include <stdio.h>

void input(int b[], int n);

int main()
{

    int a[5];
    input(a, 5);
}

void input(int b[], int n)
{

    int i;
    printf("Enter %d numbers", n);

    for (i = 0; i < n; i++)

        scanf("%d", &b[i]);

    // print arrays
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
}