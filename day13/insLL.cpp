#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &vec)
{
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        auto const insertPoint = upper_bound(vec.begin(), it, *it);
        rotate(insertPoint, it, it + 1);
    }
}
void display(vector<int> vec)
{
    for (int x : vec)
    {
        cout << x << " \n";
    }
}
int main()
{
    vector<int> a = {1, 2, 5, 3, 7};
    insertionSort(a);
    display(a);
    return 0;
}