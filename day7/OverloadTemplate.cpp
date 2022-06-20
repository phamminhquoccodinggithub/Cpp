#include <iostream>
using namespace std;
template <class X>
void func(X a)
{
    cout << "Inside F(X a)" << endl;
}
template <class X, class Y>
void func(X a, Y b)
{
    cout << "Inside F(X a, Y b)" << endl;
}
int main()
{
    func(10);
    func(10,20);
    return 0;
}