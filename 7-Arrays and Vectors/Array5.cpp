#include <iostream>
using namespace std;

int main()
{

int i,j, n;
    int num[10]= {12};
    int arr[10];

    for (i = 0; i < 9; i++)
    {
        cout<<num[i]<<endl; //num[0]=12, remaining elements are zero, 
        //if we are not initializing atleast one, in this case print garbage values
    }
    
    cout<<"************************************"<<endl;
    for (j = 0; j < 9; j++)
    {
        cout<<arr[j]<<" ";
        //if we are not initializing atleast one, in this case print garbage values
    }

    return 0;
}