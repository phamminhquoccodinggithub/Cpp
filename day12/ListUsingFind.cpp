#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> my_list = {12, 5, 10, 9};
    my_list.push_front(23);
    my_list.push_back(25);
    auto it = find(my_list.begin(), my_list.end(), 10);
    if (it != my_list.end())
    {
        my_list.insert(it, 211);
    }
    for (int x : my_list)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}