#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<char> l = {'a', 'b', 'c'};
    l.reverse();
    for (char i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}