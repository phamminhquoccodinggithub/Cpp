#include <iostream>
using namespace std;
#define SIZE 5
class stack
{

    int stck[SIZE];
    int tos;

public:
    void init()
    {
        tos = 0;
    }
    void push(int i)
    {
        if (tos == SIZE)
        {
            cout << "Stack is full\n";
            return;
        }
        stck[tos] = i;
        tos++;
    };
    // pop remove the top and return the next
    int pop()
    {
        if (tos == 0)
        {
            cout << "stack underflow \n";
            return 0;
        }
        tos--;
        return stck[tos];
    };
};

int main()
{
    stack s1, s2;
    s1.init();
    s2.init();

    s1.push(1);
    s1.push(3);
    s1.push(5);

    s2.push(2);
    s2.push(4);
    s2.push(6);
    s1.push(8);
    s1.push(10);
    s1.push(12); // return msg stack is full

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl; // return msg stack underflow

    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    cout << s2.pop() << endl;
    return 1;
}