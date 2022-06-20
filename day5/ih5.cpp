#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void getA(int n)
    {
        a = n;
    }
};
class B
{
protected:
    int b;

public:
    void getB(int n)
    {
        b = n;
    }
};
class C : public A, public B
{
public:
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The addition of a and b is " << a + b << endl;
    }
};
int main()
{
    C c;
    c.getA(10);
    c.getB(29);
    c.display();
    return 1;
}