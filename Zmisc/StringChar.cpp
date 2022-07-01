#include<iostream>
using namespace std;

int main(){

char myarr[] = "Hello";

for (char *cp = myarr; *cp!=0; cp++){
    cout<<*cp<<endl;

}
    return 0;
  
}