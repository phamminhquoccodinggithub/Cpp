#include <iostream>
using namespace std;
void findPair(int a[], int n, int target)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << "Pair found (" << a[i] << "," << a[j] << ")" << endl;
            }
        }
    }
}
int main()
{
    int n = 6;
    int a[n] = {8, 7, 2, 5, 3, 1};
    int a2[n] = {5, 2, 6, 8, 1, 9};
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    findPair(a, n, 10);
    
    return 0;
}