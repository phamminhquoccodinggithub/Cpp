#include <iostream>
using namespace std;
int BinarySearch(int a[], int left, int right, int value)
{

    int mid = left + (right - left) / 2;
    if (a[mid] == value)
    {
        return mid;
    }
    else if (a[mid] > value)
    {
        return BinarySearch(a, left, mid - 1, value);
    }
    else if (a[mid] < value)
    {
        return BinarySearch(a, mid + 1, right, value);
    }

    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
    int n = sizeof(a) / sizeof(a[0]);
    cout << BinarySearch(a, 0, n - 1, 4) << endl;
    return 0;
}