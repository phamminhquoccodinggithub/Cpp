#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter bin num: ";
    cin >> n;
    int a[10];
    int len = to_string(n).size();
    for (int i = 0; i < len; i++)
    {
        a[i] = n % 10;
        n = n / 10;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (a[i] == 1)
            sum += pow(2, i);
    }
    cout << sum <<endl;
    return 1;
}