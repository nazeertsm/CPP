#include <iostream>
using namespace std;
#include <vector>

void display(int *array, int sentinel)
{
    while (*array != -1)
    {
        cout << *array << " ";
        *array++;
    }
}

int main()
{

    int score[] = {100, 89, 211, 20, -1};

    display(score, -1);

    return 0;
}