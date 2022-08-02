#include <stdio.h>

int main()
{

    // char str[10];
    char str[10] = {'B', 'H', 'O', 'P', 'A', 'L'};

    printf("%s\n", str); //easy way to print string

    int i;

//using loop
    // for (i = 0; i <=9; i++)
    //for (i = 0; str[i]! = '\0'; i++)
    for (i = 0; str[i]; i++) //null char-ASCII Code is 0 after BHOPAL,(BHOPAL\0)
    //every non zero is true, zero is flase,  So Loop finished(string terminated at null char)
    //space ASCII Code 32 and null ASCII code 0, null and space , both are different.
    //space cannot user for string termination

        printf("%c", str[i]);
        
        // printf("%d", str[i]);      // --->  '\0' null char-ASCII Code is 0

    printf("\n");

    return 0;
}
