#include <iostream>
using namespace std;
class base
{
public:
    virtual void func()
    {
        cout << "Base Virtual Func" << endl;
    }
};
class derived : public base
{
public:
    void func()
    {
        cout << "Derived func" << endl;
    }
};
class derived2 : public base
{
public:
    void func()
    {
        cout << "Derived2 func" << endl;
    }
};
int main()
{
    base *p, b;
    derived d1;
    derived2 d2;
    p = &b;
    p->func();
    p = &d1;
    p->func();
    p = &d2;
    p->func();
    return 1;
}