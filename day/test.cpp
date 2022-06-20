#include <iostream>
using namespace std;
int &f()
{
    static int x = 10;
    return x;
}
int main()
{
    f() = 30;
    cout << f();
}