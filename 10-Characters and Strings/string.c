#include <stdio.h> 
#include<string.h>

int main()
{
	char str[20];
	
    printf("Enter your name\n");

	fgets(str, 20, stdin);

	printf("Hello %s", strrev(str)); 

    printf("\n");

	return 0;
}

	