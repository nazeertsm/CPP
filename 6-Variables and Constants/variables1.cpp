#include <iostream>
using namespace std;

int main()
{

    // increment operator example-  x++ post increment
    int x = 5, y;
    /* assignment operator first, then post increment( post increment priority later, comparively assignment)
        y=x-->(y=5) and x++-->(6) */
    y = x++;

    printf("%d %d", x, y); // y=5, x=6
    printf("\n-----------------------------------");

    int a = 5, b;

    // pre increement operator first, ++a-->6, then same assigned to b
    b = ++a;

    printf("%d %d", a, b); // x=6 and y=6;
    printf("\n-----------------------------------");

    char  ch ='x';

    /* Arithematic operator-->Associativity rules--same priority  * / %   Left to Right (priority goes to Left to right)
    a*b/c   -->*
     */


}
