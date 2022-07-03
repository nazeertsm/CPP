#include <iostream>
using namespace std;

int main()
{

    int score[] = {100, 95, 89, 68, -1};
    int *score_ptr{score};
    cout << score_ptr << endl;
    cout << score << endl;

    do
    {

        cout << *score_ptr << endl;
        score_ptr++; // increent the pointer
    } while (*score_ptr != -1);

    return 0;
}
