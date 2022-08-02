
// calculate length of the string
#include <stdio.h>

int main()
{

    int i, count = 0;
    char str[10] = {"BHOPAL"};

    for (i = 0; str[i]; i++)
    {
        printf("%c", str[i]);

        count = count + 1;
    }

    printf(" the length of the string %d", count);

    printf("\n");

    return 0;
}
