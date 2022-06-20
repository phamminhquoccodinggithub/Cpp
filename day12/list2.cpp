#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main(void)
{
    list<int> l;
    list<int> l1 = {10, 20, 30};
    list<int> l2(l1.begin(), l1.end());
    list<int> l3(move(l1));
    // list<int>::iterator it;
    cout << "size of l: " << l.size() << endl;
    cout << "l1 contents: " << endl;
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "l2 contents: " << endl;
    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "l3 contents: " << endl;
    for (auto it = l3.begin(); it != l3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}