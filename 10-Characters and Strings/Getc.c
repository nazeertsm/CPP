
// calculate length of the string
#include <stdio.h>

int main()
{

    char str[20];

    printf("Enter your name\n");

    //gets reads string include space 
    gets(str); //Reads characters from the standard input (stdin) and stores them 
    //as a C string into str until a newline character or the end-of-file is reached.

    printf("Hello %s", str); 

    printf("\n");

    return 0;
}
