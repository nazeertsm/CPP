#include <iostream>
using namespace std;
#include<vector>

int main()
{

   cout<<"\n--------------------------------"<<endl;
    int score{100};
    int *score_ptr{&score};
    // "score_ptr" has address of score-- *score_ptr(de-reference of score_ptr- inside address) value is 100
    cout << *score_ptr << endl; // 100
    *score_ptr = 200;
    cout << *score_ptr << endl; // 200
    cout << score << endl;      // 200

    cout<<"\n--------------------------------"<<endl;
    

    string name {"Nazeer"};
    string *string_ptr{&name};
    cout<<*string_ptr<<endl; //Nazeer

    name = "Ahmed";
    cout<<*string_ptr<<endl; //Ahmed

    cout<<"\n--------------------------------"<<endl;

/*
How to Create C++ Vectors
vector <type> variable (elements)

type:  defines a data type stored in a vector (e.g., <int>, <double> or <string>)
variable:  is a name that you choose for the data
elements: specified the number of elements for the data

*/
    vector<string> str_list{"Mahammad", "Nazeer", "Ahmed"};
    vector<string> *vector_ptr{nullptr};
    vector_ptr= &str_list;
    
    cout<<&str_list<<endl;
    cout<<vector_ptr<<endl;
    cout<<"first string  "<<vector_ptr->at(0)<<endl;

    for(auto each_str: *vector_ptr){

        cout<<each_str<<" ";
    }

          
    return 0;
}
