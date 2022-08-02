#include <stdio.h> 
#include<string.h>

int main()
{
	char str[5][20];
	int i;
	
    printf("Enter 5 city names\n");

	for (i = 0; i <5; i++)
	{
		fgets(str[i], 20, stdin);
	
	}
	
	for ( i = 0; i < 5; i++)
	{
			printf("City names %s", str[i]);
	}
	
	
    printf("\n");

	return 0;
}

	