// C++ program to generate random numbers

#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int main()
{
	
    int magic;
    int guess;
	// Use current time as seed for random generator
	srand(time(0));

    //generate random number
	magic = rand();

    //Guess the random number
    cout<<"Please enter your guessed number"<<endl;

    //store the guess value in "guess" variable
    cin>>guess;

    if(magic == guess){

        cout<<"Congratulations!, you are guessing correct"<<endl;

    }

    else{

    cout<<"Wrong guess, Game over"<<endl;

    }

    
	
}


