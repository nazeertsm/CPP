#include<stdlib.h>
#include <stdio.h>
#include <cstring>
using namespace  std;


int main(){

    char *P1;
    
    P1=  (char *)malloc(1);
    strcpy(P1, "Nazeer ahmed");
    printf("%s\n", P1);
    return 0;
}