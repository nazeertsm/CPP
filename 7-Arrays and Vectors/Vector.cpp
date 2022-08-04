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
    cout << "The vector size is: " << s;
    return 0;
}