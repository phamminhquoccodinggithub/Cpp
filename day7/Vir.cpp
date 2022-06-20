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
void f(base &r){
    r.func();
}
int main()
{
    base  b;
    derived d1;
    derived2 d2;
    f(b);
    f(d1);
    f(d2);
    return 1;
}