#include <stdio.h> 

int main()
{
	
	char str[20];
    printf("Enter your name\n");

	//It reads a line from the specified stream and stores it into the string pointed to by str. 
	//It stops when either (n-1) characters are read, 
	//the newline character is read, or the end-of-file is reached, whichever comes first.

    fgets(str, 20, stdin);

    printf("Hello %s", str); //print 19 char only

    printf("\n");

	return 0;
}