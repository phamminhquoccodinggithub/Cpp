#include <iostream>
using namespace std;

template <class X>
void swapArgs(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a = 1, b = 2.2;
    double i = 1.2, j = 34.65;
    char k = 'Y', l = 'L';    
    swap(a, b);
    cout << a << " " << b << endl;
    swap(i, j);
    cout << i << " " << j << endl;
    swap(k, l);
    cout << k << " " << l << endl;
    return 0;
}