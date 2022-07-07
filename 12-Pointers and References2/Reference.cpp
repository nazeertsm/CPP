#include <iostream>
using namespace std;
#include<vector>

int main()
{

    int num{100};
    int &ref{num};//ref is an alias to num. ref store the value, pointer store the address
    cout << num << endl; //100
    cout << ref << endl; //100- the ref is an alias to the num.

    num =200;
    cout<<"\n---------------------------"<<endl;
    cout << num << endl; //200
    cout << ref << endl; //200

    ref =300; //Here, changing num, but changing it through the reference.
    cout<<"\n---------------------------"<<endl;
    cout << num << endl; //300
    cout << ref << endl; //300

    vector<string> strlist{"Larry", "Moe", "curly"};

    for (auto str : strlist)  /*str is copy of each element, changing the copy to funny, 
                                  but we're not changing any of these actuals to funny.*/
        str="Funny";

    for (auto str : strlist)  //No change
        cout<<str<<endl;
        

    for (auto &str : strlist)  /*str is reference of each element
                                So at each iteration of the loop, str will be a reference to the actual.*/
        str="Funny";

            
    //const gives us the protection of making those elements read-only,
    for (auto const &str : strlist)  /*Now the vector element has changes, */
                                
        cout<<str<<endl;


    return 0;
}