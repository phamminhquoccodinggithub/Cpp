#include <iostream>
using namespace std;
int countDup(int a[], int n, int value)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j] && a[i] == value)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n = 5;
    int a[n] = {1, 1, 2, 3, 4};
    int i = countDup(a, n, 4);
    if (i == 0)
    {
        cout << "Not found, try again\n";
    }
    else
        cout << i << endl;
    return 0;
}