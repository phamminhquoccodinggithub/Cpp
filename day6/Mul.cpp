#include <iostream>
using namespace std;
class Mul
{
    int a;

public:
    Mul(){};
    Mul(int b)
    {
        a = b;
    };
    void display()
    {
        cout << a << endl;
    }
    Mul operator*(Mul m)
    {
        Mul temp;
        temp.a = a * m.a;
        return temp;
    }
};
int main()
{
    Mul m1(2), m2(3);
    m1.display();
    m2.display();
    m1 = m1 * m2;
    m1.display();
    return 1;
}