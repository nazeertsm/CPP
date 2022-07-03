#include <iostream>
using namespace std;

int main()
{

    char name[] = {"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0];
    char_ptr1 = &name[3];

    cout<<char_ptr1<<endl;
    cout<<char_ptr2<<endl;
    
    return 0;
}

