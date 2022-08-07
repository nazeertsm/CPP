#include <iostream>

int main()
{

    
    double multiplier{4};


    for (auto i :{1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        
        std::cout << " result : " << (i*multiplier) << std::endl;
    }

           std::cout << " multiplier : " << (multiplier) << std::endl;

    return 0;
}