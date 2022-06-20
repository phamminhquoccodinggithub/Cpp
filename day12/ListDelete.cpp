#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> my_list = {12, 5, 10, 9, 1, 2, 3};
    my_list.push_front(23);
    my_list.push_back(25);
    for (int x : my_list)
    {
        cout << x << " ";
    }
    cout << endl;
    list<int>::iterator it = my_list.begin();
    list<int>::iterator it2 = my_list.begin();

    advance(it2, 3);        // increase iterator by n positions
    my_list.erase(it, it2); // delete from the first to the third
    cout << "Deleted from first element to 3rd" << endl;
    for (int x : my_list)
    {
        cout << x << " ";
    }
    cout << endl;
    my_list.reverse();
    for (int x : my_list)
    {
        cout << x << " ";
    }
    cout << endl;
    list<int> l1={1,2,3,4}; 
    list<int> l2={'a','b','c','d'};
    l1.merge(l2);
    for (int x : l1)
    {
        cout << x << " ";
    }
    return 0;
}