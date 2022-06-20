//Operator Overloadding when using with prefix and postfix
#include <iostream>
using namespace std;
class count
{
    int value;

public:
    count() : value(5) {}
    // operator when used as prefix
    void operator++() { ++value; }
    // operator when used as postfix
    void operator++(int)
    {
        value++;
    }
    void display()
    {
        cout << value << endl;
    }
};
int main()
{
    count c;
    // call the operator++(int)
    c++;
    c.display();
    // call the operator++()
    ++c;
    c.display();
    return 1;
}