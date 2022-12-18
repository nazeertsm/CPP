#include <iostream>
using namespace std;

int main()
{

    int x, i;
    for (i = 1; i <= 3; i++)
    {

        printf("\nEnter an even number");
        scanf("%d", &x);
        if (x % 2 == 0)
            break;
    }

    if (i == 4)

        printf("Game over....");
    else

        printf("Congrats!.. you are Enter even number ....");
}
