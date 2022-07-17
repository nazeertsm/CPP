#include <iostream>
using namespace std;

// WAP to print first n natural numbers, while loop is entry control loop
int main()
{

    int i = 1, n;
    printf("Enter a number");

    scanf("%d", &n);

    while (i <= n)
    {

        printf("%d ", i);

        i++;
    }
}