#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l = {1, 2, 65, 4, 8, 3, 3};
    list<int> l2 = {1, 2, 3};
    list<int> l3 = {4, 5, 6};
    list<int>::iterator it;
    int a, b;
    while (1)
    {
        cout << "1.Insert - 2. Push back -3.Push front - 4. Pop back - 5. Pop front - 6. Empty - 7. Size - 8. Max Size - 9. Front - 10. Back - 11. Swap - 12. Reverse - 13. Sort - 14. Merge - 15. Splice - 16. Unique - 17. Resize - 18 - Assign - 19. Emplace - 20. Emplace back - 21. Emplace front - 22. Display - 23. Exit " << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter number: ";
            cin >> b;
            l.insert(l.begin(), b);
            break;
        case 2:
            cout << "Enter number: ";
            cin >> b;
            l.push_back(b);
            break;
        case 3:
            cout << "Enter number: ";
            cin >> b;
            l.push_front(b);
            break;
        case 4:
            l.pop_back();
            break;
        case 5:
            l.pop_front();
            break;
        case 6:
            cout << l.empty() << endl;
            break;
        case 7:
            cout << l.size() << endl;
            break;
        case 8:
            cout << l.max_size() << endl;
            break;
        case 9:
            cout << l.front() << endl;
            ;
            break;
        case 10:
            cout << l.back() << endl;
            break;
        case 11:
            for (it = l2.begin(); it != l2.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            swap(l, l2);
            for (it = l2.begin(); it != l2.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 12:
            l.reverse();
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 13:
            l.sort();
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 14:
            l2.merge(l3);
            for (it = l2.begin(); it != l2.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 15:
            l.splice(l.begin(), l3);
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 16:
            l.unique();
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 17:
            l.resize(2);
            cout << "After resize: \n";
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 18:
            l.assign(2, 11111);
            break;
        case 19:
            l.emplace(l.begin(), 1);
            break;
        case 20:
            l.emplace_back(1);
            break;
        case 21:
            l.emplace_front(1);
            break;

        case 22:
            for (it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            break;
        case 23:
            exit(0);
            break;
        default:
            cout << "Please try again!" << endl;
            break;
        }
    };
    return 0;
}