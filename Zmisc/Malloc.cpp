#include<stdlib.h>
#include <stdio.h>
using namespace  std;


int main(){

    int *P1;
    int *P2;
    /*Now this malloc ( ) function returns int pointer.
    So we have to type-caste it and say it is integer pointer.
    Now this line will allocate heap memory.
    Remember, whenever you say malloc then only it will allocate in heap. P1 will get the address
    */
    P1=  (int *)malloc(5*sizeof(int)); //malloc() function allocate 5*4kb=20kb memory //C lang

    printf("%d\n", P1);
    P2 = new int[5];  //c++
    printf("%d\n", P2);

    return 0;
	
}