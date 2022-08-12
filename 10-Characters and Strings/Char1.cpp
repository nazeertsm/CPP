// Program to demonstrate the use of character functions.
#include <ctype.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    char n;
    printf("\nEnter a character=");
    n = getche();
    if (isalpha(n))
        printf("\nYou typed an alphabet");
    if (isdigit(n))
        printf("\nYou typed a digit");
    if (isalnum(n))
        printf("\nYou typed an alphabet or digit");
    if (isspace(n))
        printf("\nYou typed a blank space");
    if (ispunct(n))
        printf("\nYou typed punctuator");
    return (0);
}

/*
Character functions in C
Character functions need ctype.h  header file to be included in the pgoram. Different character functions provided by C Language are:

1.  isalpha():
This function checks whether the character variable/constant contains alphabet or not.

2. isdigit()
This function checks whether the character variable/ constant contains digit or not.

3. isalnum()
This function checks whether the character variable/constant contains an alphabet or digit.

4. ispunct()
This function checks whether the character variable/constant contains a punctuator or not. Punctuators are comma, semicolon etc.

5.  isspace()
This function checks whether the character variable/constant contains a space or not.
*/