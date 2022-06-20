#include <iostream>
using namespace std;
int stack_idx = 0, stack_size = 0;
int stack[10];
void push(int x)
{
    if (stack_idx == stack_size)
    {
        cout << "over flow\n";
    }
    else
        stack[stack_idx++] = x;
}
void pop()
{
    cout << stack[stack_size-1] << endl;
    if (stack_size == 0)
    {
        cout << "underflow" << endl;
        return;
    }
    stack_size--;
}
int main()
{
    int ch, s;
    while (true)
    {
        cout << "0.Size - 1. insert - 2. pop - 3.display - 4.exit\n";
        cin >> ch;
        switch (ch)
        {
        case 0:
            cout << "enter size\n";
            cin >> s;
            stack_size = s;
            break;
        case 1:
            int a;
            cin >> a;
            push(a);
            break;
        case 2:
            pop();
            break;
        case 3:
            for (int i = 0; i < stack_size; i++)
            {
                cout << stack[i] << " ";
            }
            cout << endl;

            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Please try again!" << endl;
            break;
        }
    }

    return 0;
}