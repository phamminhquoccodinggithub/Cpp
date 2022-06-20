#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // stack<int> s;
    // int b;
    int a;
    // stack<float> s;
    // float b;
     stack<char> s;
     char b;    
    
    while (1)
    {
        cout << "1. Insert - 2. POP the value - 3. Size of stack - 4. Top - 5. Exit" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter number: ";
            cin >> b;
            s.push(b);
            cout << "\n===================================================\n";
            break;
        case 2:
            while (!s.empty())
            {
                cout << s.top();
                s.pop();
                cout << " ";
            }
            cout << " ==> Deleted all in stack" << endl;
            cout << "\n===================================================\n";
            break;
        case 3:
            cout << "Size of stack is " << s.size() << endl;
            cout << "\n===================================================\n";
            break;
        case 4:
            cout << "Top element in stack is " << s.top() << endl;
            cout << "\n===================================================\n";
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Please try again!" << endl;
            cout << "\n===================================================\n";
            break;
        }
    };
}