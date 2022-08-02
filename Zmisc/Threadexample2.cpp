    #include<iostream>
    #include<thread>
    using namespace std;

// function that has to be executed on the thread   
    void task1(string msg)
{
    std::cout << "task1 says Hello: " <<endl;
}

    int main(){

//create the thread object that will ultimately invoke the function:
    thread t1(task1, "Hello"); 

//The constructor's first argument is the function the thread will execute, followed by the function's parameters. 
//The thread is automatically started upon construction.    

    t1.join();
// Main thread waits for the new thread th to stop execution and as a result, its own execution gets blocked

    return 0;
    }   
    