#include <iostream>
#include <vector>
using namespace std;
// main method
int main()
{
    // declare a vector
    std::vector<int> vtr;
    // add the elements to the vector
    for (int i = 0; i < 5; i++)
    {
        vtr.push_back(i);
    }
    // variable to store the vector size
    int s = vtr.size();
    // print the vector size
    //cout << "The vector size is: " << s<<endl;

    cout<<vtr.front()<<endl; //Returns the first element. (Does not check whether the container is empty.)
    cout<<vtr.back()<<endl;; //Returns the last element. (Does not check whether the container is empty.)
    cout<<vtr.at(4)<<endl;// Returns the element at the position specified by index.

    return 0;
}