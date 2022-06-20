#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l, l2;
    list<int>::iterator it;
    // list<float> l;
    // list<float>::iterator it;
    int a, b;
    // int a;
    // float b;
    while (1)
    {
        cout << "1. Insert - 2. Display with sort - 3. POP back - 4. POP front - 5. emplace back - 6. emplace front - 7. Exit" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter number: ";
            cin >> b;
            // l.push_back(b);
            // l.push_front(b);

            it = l.begin();
            // l.insert(it, b);
            l.emplace(it, b);
            break;
        case 2:
            l.sort();
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 3:
            l.pop_back();
            cout << "POP back: " << endl;
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 4:
            l.pop_front();
            cout
                << "POP front: " << endl;
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 5:
            l.emplace_back();
            cout << "Emplace back: " << endl;
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 6:
            l.emplace_front();
            cout << "Emplace front: " << endl;
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        
        case 7:
            exit(0);
            break;
        default:
            cout << "Please try again!" << endl;
            break;
        }
    };
    return 0;
}