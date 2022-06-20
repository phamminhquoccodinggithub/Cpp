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
    /*void func()
    {
        cout << "Derived2 func" << endl;
    }*/
};
class derived3 : public derived
{
public:
    /*void func()
    {
        cout << "Derived3 func" << endl;
    }*/
};
class derived4 : public derived2
{
public:
    /*void func()
    {
        cout << "Derived4 func" << endl;
    }*/
};
int main()
{
    base *p, b;
    derived d1;
    derived2 d2;
    derived3 d3;
    derived4 d4;
    p = &b;
    p->func();
    p = &d1;
    p->func();
    p = &d2;
    p->func();
    p = &d3;
    p->func();
    p = &d4;
    p->func();
    return 1;
}