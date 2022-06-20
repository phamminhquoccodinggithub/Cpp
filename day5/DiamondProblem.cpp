#include <iostream>
using namespace std;
class U
{
public:
    U()
    {
        cout << "U constructor" << endl;
    };
};
class V : virtual public U
{
public:
    V()
    {
        cout << "V constructor" << endl;
    };
};
class W : virtual public U
{
public:
    W()
    {
        cout << "W constructor" << endl;
    };
};
class X : virtual public W, virtual public V
{
public:
    X()
    {
        cout << "X constructor" << endl;
    }
};
int main()
{
    X x;
    return 1;
}