#include<iostream>
using namespace std;
#include<vector>

int main(){

int score {10};
double high_temp{100.7};
int *score_ptr{nullptr};

score_ptr = &score;

//score_ptr = &high_temp; //compiler Error-Type confict- value of type "double *" cannot be assigned to an entity of type "int *"

double *temp_ptr;
temp_ptr = &high_temp;

cout<<temp_ptr<<endl;

temp_ptr = nullptr;




return 0;

}
