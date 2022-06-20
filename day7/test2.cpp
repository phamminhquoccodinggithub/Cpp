#include <iostream>
using namespace std;
template <class T, class W>
class A
{
    T x;
    W y;

public:
    A()
    {
        cout << "only constructor A called " << endl;
    }
    A(T a, W b)
    {
        x = a;
        y = b;
        cout << "constructor A called " << endl;
        cout << x << " " << y << endl;
    }
};
int main()
{
    //    A<char, char> a;
    //    A<int, double> b;
    A("Hello", 11.2);
    A(32525, 'C');
    return 0;
}