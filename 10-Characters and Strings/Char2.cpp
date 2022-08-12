//Program to use of islower,isupper,tolower(),toupper().
#include <ctype.h>
#include <stdio.h>
#include <conio.h>
int main()
{

    char n;
    printf("\nEnter an alphabet=");
    n = getche();
    if (islower(n))
        n = toupper(n);
    else
        n = tolower(n);
    printf("\nNow alphabet=%c", n);
    return (0);
}

/*
6. isupper()
This function checks whether the character variable/constant contains an capital letter  alphabet or not.

7.  islower()
This function checks whether the character variable/constant contains a lowercase alphabet or not.

8. toupper()
This function converts lowercase alphabet into uppercase alphabet.

9. tolower()
This function converts an uppercase alphabet into lowercase alphabet. */