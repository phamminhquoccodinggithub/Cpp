#include <iostream>
#include <thread>
#include <algorithm>
#include <list>
using namespace std;
list<int> mylist;
void addToList(int max, int interval)
{
    for (int i = 0; i < max; i++)
    {
        if ((i % interval) == 0)
        {
            mylist.push_back(i);
        }
    }
}
void printList()
{
    for (auto it = mylist.begin(), end_itr = mylist.end(); it != end_itr; ++it)
    {
        cout << *it << " , ";
    }
    cout << endl;
}
int main()
{
    int max = 5;
    thread t1(addToList, max, 1);
    thread t2(addToList, max, 10);
    thread t3(printList);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}