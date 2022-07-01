#include<iostream>
using namespace std;

int main(){


cout<<"Enter the value between 1 to 7"<<endl;
int x;

cin>>x;

switch (x)
{
case 1:
    cout<<"Monday";
    break;

case 2:
cout<<"Tuesday";
    break;

case 3:
cout<<"Wednesday";
    break;

case 4:
cout<<"Thursday";
    break;

case 5:
cout<<"Friday";
    break;

case 6:
cout<<"Saturday";
    break;

case 7:
cout<<"Sunday";
    break;

default:
cout<<"please enter the value with in the Range 1 to 7"<<endl;

}

    return 0;

}

