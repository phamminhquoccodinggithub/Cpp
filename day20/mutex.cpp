// using lock and unlock to synchronize
#include <iostream>
#include <thread>
#include <string>
#include <mutex>
using namespace std;
mutex mu;
void shared_cout(string msg, int id)
{
    mu.lock();
    cout << msg << ": " << id << endl;
    mu.unlock();
}
void thread_function()
{
    for (int i = -5; i < 0; i++)
    {
        shared_cout("thread function", i);
    }
}
int main()
{
    thread t(&thread_function);
    for (int i = 0; i < 5; i++)
    {
        shared_cout("main function", i);
    }
    t.join();
    return 0;
}