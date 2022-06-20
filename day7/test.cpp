#include <iostream>
using namespace std;
#define TABWIDTH 10
template <class X>
void tableOut(X data, int tab)
{
    for (; tab; tab--)
    {
        for (int i = 0; i < TABWIDTH; i++)
        {
            cout << ' ';
        }
        cout << data << "\n";
    }
}
int main()
{
    tableOut("This is string", 2);
    tableOut(100, 1);
    tableOut('G', 5);
    tableOut(10 / 3, 3);
    return 0;
}