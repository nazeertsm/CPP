#include <iostream>
using namespace std;

int main()
{

int high_score{100};
int low_score{65};

const int *score_ptr{&high_score};//The data pointed by the pointer is constant and cannot be changed -case 1
//const int const score_ptr{&high_score};//The pointer itself vannot change and point some where else -case 2

cout<<*score_ptr<<endl;  //100

//*score_ptr=86;  //Error case and case 2

score_ptr = &low_score;  //OK case 1
//score_ptr = &low_score;  //ERROR case 2

cout<<*score_ptr<<endl;  //65-case1

 return 0;
}