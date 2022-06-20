#include <iostream>
#include <queue>
using namespace std;
int main()
{
    //queue<int> q;
    int a;
    queue<float> q;
    float b;
    while (1)
    {
        cout << "1. Insert - 2. POP the value - 3. Size of queue - 4. Front - 5. Back - 6. Exit" << endl;
        cin >> a;        
        switch (a)
        {
        case 1:
            cout << "Enter number: ";
            cin >> b;
            q.push(b);
            cout<<"\n===================================================\n";
            break;
        case 2:
            while (!q.empty())
            {
                cout << q.front();
                q.pop();
                cout << " ";
            }
            cout << " ==> Deleted all in queue" << endl;
            cout<<"\n===================================================\n";
            break;
        case 3:
            cout << "Size of queue is " << q.size() << endl;
            cout<<"\n===================================================\n";
            break;
        case 4:
            cout << "Front in queue is "<< q.front() << endl;
            cout<<"\n===================================================\n";
            break;
        case 5:
            cout << "Back in queue is "<< q.back() << endl;
            cout<<"\n===================================================\n";
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Please try again!" << endl;
            cout<<"\n===================================================\n";
            break;
        }
    };
}