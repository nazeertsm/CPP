#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do                                    
    {
        printf("%d ", i);
        i = i + 1;

    } while (i <= 10);//do while is exit control loop, At least one time loop will execute
}

/*condition checking start from 2<=10, condition 1 without checking executing loop
2<=10-True-1,
3<=10-True-2,
4<=10-True-3,
5<=10-True-4,
6<=10-True-5,
7<=10-True-6,
8<=10-True-7,
9<=10-True-8,
10<=10-True-9,
11<==10-False
*/
