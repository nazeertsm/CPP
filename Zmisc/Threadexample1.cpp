    #include<iostream>
    #include<thread>
    using namespace std;

// function that has to be executed on the thread   
    void fun(){
    cout << "Hello world!" << endl; //

    }

    int main(){

// A new thread is created and executed 
    thread th(fun);

// Main thread waits for the new thread th to stop execution and as a result, its own execution gets blocked

    th.join();
    return 0;
    }
    