#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {1, 4, 2, 3, 5};
    sort(a, a + 5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}