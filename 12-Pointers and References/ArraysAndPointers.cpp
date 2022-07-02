#include <iostream>
using namespace std;

int main()
{
    int scores[]{100, 95, 89};

    cout << "Value of score" << scores << endl;

    cout << scores << endl;  // "score is the address of first element"
    cout << *scores << endl; //  100, after dereference of first address value

    int *score_ptr{scores};
    cout << "The Value of score_ptr" << score_ptr << endl;

    cout << "\n Array subscript notation---------------" << endl;
    cout << scores[0] << endl; //
    cout << scores[1] << endl; //
    cout << scores[2] << endl; //

    cout << "\n Pointer subscript notation---------------" << endl;
    cout << score_ptr[0] << endl; //
    cout << score_ptr[1] << endl; //
    cout << score_ptr[2] << endl; //

    cout << "\n Pointer offset notation---------------" << endl;
    cout << *score_ptr << endl;       // 100--dereference the  pointer to get the integer
    cout << *(score_ptr + 1) << endl; // 95
    cout << *(score_ptr + 2) << endl; // 89

    cout << "\n Array offset notation---------------" << endl;
    cout << *scores << endl;       //
    cout << *(scores + 1) << endl; //
    cout << *(scores + 2) << endl; //

    return 0;
}
