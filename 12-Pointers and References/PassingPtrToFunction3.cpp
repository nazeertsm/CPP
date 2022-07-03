#include <iostream>
using namespace std;
#include <vector>


//void display(const vector<string> *const str_ptr)
void display(vector<string> *str_ptr)

{

    // if we want  to change the first vector element
    //(*str_ptr).at(0) = "Md";

    for (auto str : *str_ptr)

        cout << str << " ";
}

int main()
{

    vector<string> str_list{"Mahammad", "Nazeer", "Ahmed"};

    display(&str_list);

    return 0;
}