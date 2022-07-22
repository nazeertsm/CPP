#include <iostream>
using namespace std;

int main()
{

    int i, j, k;

    for (int i = 1; i <= 5; i++)
    {
        k = 'A';
        for (int j = 1; j <= 5; j++)
        {

            if (j >= i)
            {
                printf("%c", k);
                k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}