#include <iostream>
using namespace std;
// print even numbers
int main()
{

    int i = 0, n = 20;
    while (i <= n)
    {

        if (i % 2 == 0)
            cout << "Even numbers: " << i << endl;
        i += 1;
    }

    cout<<"Loop done!.."<<endl;
}