// list is a container like vector
//  comparisions better than vector
//  template<class Type, class Alloc=allocater<T>>class list;

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> my_list = {12, 13, 14, 15, 16};
    list<int>::iterator it;
    for (it = my_list.begin(); it != my_list.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}