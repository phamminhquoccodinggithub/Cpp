#include <iostream>
#include <thread>
using namespace std;
void threadFunction()
{
    cout << "thread function\n";
}
int main()
{
    string st = "Hello";
    thread t1(&threadFunction, move(st));
    cout << "main\n";
    cout << "main thread id: " << this_thread::get_id() << endl;
    cout << " thread id: " << t1.get_id() << endl;
    // thread t2 = move(t1);
    t1.join();
    return 0;
}