#include <iostream>
#define SIZE 100
using namespace std;
class stack
{
    int stac[SIZE];
    int tos;

public:
    stack()
    {
        tos = 0;
    }
    void push(int i)
    {
        if (tos == SIZE)
        {
            cout << "stack overflow\n";
            return;
        }
        stac[tos] == i;
        tos++;
    }
    int pop()
    {
        if (tos == 0)
        {
            cout << "stack underflow\n";
            return 0;
        }
        tos--;
        return stac[tos];
    }
    operator int()
    {
        return tos;
    }
};
int main()
{
    stack s;
    int i = s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout << i << endl;
    return 0;
}