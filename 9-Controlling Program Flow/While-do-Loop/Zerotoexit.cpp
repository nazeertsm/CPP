#include <iostream>
using namespace std;

int main()
{

    int x, s = 0;

    do
    {
        printf("\nEnter the value: ");
        scanf("%d", &x);
        s = s + x;

    } while (x); //loop execute until x value is zero

    printf("\nSum is %d", s);

    printf("\n");

    return 0;
}
