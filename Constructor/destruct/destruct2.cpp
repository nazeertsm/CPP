#include<iostream>
#include<string>
using namespace std;


int cnt=0;

class Test
{


	public:
		Test()
		{
			cnt++;
			cout<<"\n No. of Object created:\t"<<cnt;
		}
		
		~Test()
		{
			cout<<"\n No. of Object destroyed:\t"<<cnt;
			--cnt;
		}
};

main()
{
	Test t,t1,t2,t3;
	return 0;
}
