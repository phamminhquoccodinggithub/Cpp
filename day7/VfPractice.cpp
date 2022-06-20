#include <iostream>
using namespace std;
class convert
{
protected:
    double val1, val2;

public:
    convert(double i)
    {
        val1 = i;
    }
    double getConv()
    {
        return val2;
    }
    double getInit()
    {
        return val1;
    }
    virtual void compute() = 0;
};
// liters to gallons
class L2G : public convert
{
public:
    L2G(double i) : convert(i) {}
    void compute()
    {
        val2 = val1 * 0.2642;
    }
};
// farenheight to celsius
class F2C : public convert
{
public:
    F2C(double i) : convert(i) {}
    void compute()
    {
        val2 = (val1 - 32) / 1.8;
    }
};
int main()
{
    convert *p;
    L2G lg(14);
    F2C fc(98.6);
    p = &lg;
    cout << p->getInit() << " Litres is ";
    p->compute();
    cout << p->getConv() << " Gallons " << endl;

    p = &fc;
    cout << p->getInit() << " in Fahrenheit is ";
    p->compute();
    cout << p->getConv() << " Censius " << endl;
    return 0;
}