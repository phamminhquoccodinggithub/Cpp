#include <iostream>
using namespace std;

template <typename X>
X add(X a, X b)
{
    return a + b;
}

int main()
{
    int a = 1;
    double b = 4.4;
    cout << add(a, int(b)) << endl;
    return 0;
}