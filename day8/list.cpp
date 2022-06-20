#include <iostream>
#include <list>
using namespace std;
int main()
{
    //list<int> l;
    //list<int>::iterator it;
    list<float> l;
    list<float>::iterator it;
    //int a, b;
    int a;
    float b;
    while (1)
    {
        cout << "1. Insert - 2. Display - 3. Exit" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter number: ";
            cin >> b;
            l.push_back(b);
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
            exit(0);
            break;
        default:
            cout << "Please try again!" << endl;
            break;
        }
    };
    return 0;
}