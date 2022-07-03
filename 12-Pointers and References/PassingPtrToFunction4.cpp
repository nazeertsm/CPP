#include <iostream>
using namespace std;
#include <vector>


void display(const vector<string> *const str_ptr)

{

    // const vector<string>--- vector pointing to is constant, does not allow to modify below
    //(*str_ptr).at(0) = "Md"; 

    for (auto str : *str_ptr)

        cout << str << " ";

        //str_ptr=nullptr, str_ptr is constant and it does  allow to change
}

int main()
{

    vector<string> str_list{"Mahammad", "Nazeer", "Ahmed"};

    display(&str_list);

    return 0;
}