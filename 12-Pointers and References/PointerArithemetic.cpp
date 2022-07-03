#include <iostream>
using namespace std;

int main()
{

    int score[] = {100, 95, 89, 68, -1};
    int *score_ptr{score};
    cout << score_ptr << endl;
    cout << score << endl;

    while (*score_ptr != -1) //check the condition up to end of the value i.e -1
    {

        cout << *score_ptr << endl;
        score_ptr++; //increent the pointer
    }

    return 0;
}