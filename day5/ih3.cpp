#include <iostream>
using namespace std;
class base
{
protected:
    int i, j;

public:
    void set(int a, int b)
    {
        i = a;
        j = b;
    }
    void show()
    {
        cout << i << " " << j << endl;
    }
};
class derived1 : public base
{
    int k;

public:
    void setK()
    {
        k = i * j;
    }
    void showK()
    {
        cout << k << endl;
    }
};
class derived2 : public derived1
{
    int m;

public:
    void setM()
    {
        m = i - j;
    }
    void showM()
    {
        cout << m << endl;
    }
};
int main()
{
    derived1 ob1;
    derived2 ob2;
    ob1.set(4, 3);
    ob1.show();
    ob1.setK();
    ob1.showK();
    ob2.set(10, 4);
    ob2.show();
    ob2.setK();
    ob2.setM();
    ob2.showK();
    ob2.showM();
    return 1;
}