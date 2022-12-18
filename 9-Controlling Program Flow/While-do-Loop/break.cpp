#include <iostream>
using namespace std;

int main()
{
  int i=0, n=20;
  while (i < n)
  {
    if (i == 5)
    {
      i++;
      break;
    }
  std::cout << "Loop"<<i<< std::endl;  
    
    i=i+1;
  }
  std::cout << "Loop done!" << std::endl;
}
