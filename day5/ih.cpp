#include <iostream>
using namespace std;
class base
{
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
class derived : private base
{
    int k;

public:
    derived(int x)
    {
        k = x;
    }
    void display_k()
    {
        cout << k << endl;
    }
};
int main()
{
    derived ob(5);
    
    ob.display_k();
    return 1;
}