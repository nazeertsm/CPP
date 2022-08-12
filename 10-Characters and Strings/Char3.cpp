#include <iostream>
#include <ctype.h> //for charactor based function
#include<cstring> //for cstyle string function

using namespace std;
int main()
{

    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    cout << "Please enter your first_name: " << endl;
    cin >> first_name;

    cout << "Please enter your last_name: " << endl;
    cin >> last_name;

    cout << "your first_name is: " << first_name << endl;
    cout << "your last_name is: " << last_name << endl;

    strcpy(full_name, first_name);// copy first_name to full_name;
    cout << "your full_name is: " << full_name << endl;

    //first_name string length
    cout<<"first_name string length: "<<strlen(first_name)<<" Characters"<<endl;
    
    //stringcat

    strcat(first_name, "MD");
    cout<<first_name<<endl;


    return (0);
}
