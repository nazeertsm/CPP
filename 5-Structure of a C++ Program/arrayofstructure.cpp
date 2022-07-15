#include<iostream>
using namespace std;

struct Card{

int face;
int shape;
int color;

};

int main(){

    //How to declare array of structure, deck size 52(52 * 4 bytes Memory)

    struct Card deck[52]={{1,0,0}, {2,0,0}};
    printf("%d\n", deck[0].face);
    printf("%d\n", deck[0].shape);

    

    return 0;
    
}