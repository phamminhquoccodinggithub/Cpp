#include <iostream>
using namespace std;
void swap(int &i, int &j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
}
int main()
{
    int a = 1, b = 3;
    cout << "a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "after" << endl;
    cout << "a = " << a << " b = " << b << endl;
    return 1;
}