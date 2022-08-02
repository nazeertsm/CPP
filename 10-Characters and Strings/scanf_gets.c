#include <stdio.h> 

int main()
{
	char name[50];
	
	printf("\n Please Enter your Full Name: \n");
	scanf("%s", name); //input: Nazeer ahmed, space dont print(before space end of the string)
	//gets(name);  //input Nazeer ahmed(until enter gets take the input)
	
	printf("\n=============");
	printf("%s", name);
	
	return 0;
}