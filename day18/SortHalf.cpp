#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
void sortHalf(int a[], int n)
{
    int mid = n / 2;
    sort(a, a + mid);
    sort(a + mid, a + n, greater<int>());
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n = 9;
    int a[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    printArray(a, n);
    cout << endl;
    sortHalf(a, n);
    printArray(a, n);
    return 0;
}