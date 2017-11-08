#include <iostream>
#include <thread>
#define NUM 10

//  g++ thread.cpp  -std=c++11 -pthread

using namespace std;

void * func ( int i) {
    cout << " Thread Created in Func : " << i <<endl;
}

int main()
{
    //cout << "Hello world!" << endl;
    thread t[NUM];
    int i;
    for (i =0; i<NUM; i++)
        t[i] = thread(func, i);

    cout << "Lauched from Main "<< endl;

    for(i=0; i<NUM; i++)
        t[i].join();

    return 0;
}
