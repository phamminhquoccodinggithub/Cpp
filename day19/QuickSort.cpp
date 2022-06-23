// Array 6, 3, 7, 2, 4, 5
// L=6,R=5,P=6
// step 1: if(P<R) increase L pointer, else swap between P and R
//  => array: 5, 3,7,2,4,6 , L=5, P=6, R=6
// Step 2: if P>L then increase L pointer, else swap P and L
//  array: 5,3,7,2,4,6 but L=3, P=6, R=6
//  array: 5,3,7,2,4,6 but L=7, P=6, R=6
// Step 3: if (P>L) decrement R, else swap P and R
//  5,3,6,2,4,7 L=6,R=7,P=6
// Step 4: if (P<R) decrease R, else swap P and R
// 5,3,6,2,4,7 L=6, R=4, P=6
// Step 5: if P>R then P>L then increase L pointer, else swap P and R
// 5,3,4,2,6,7 L=4,R=P=6
// Step 6: if P > L increase L pointer, else swap P and L
// 5,3,4,2,6,7 L=2, R=P=6
// Step 7: if P>L increase L pointer
// 5,3,4,2,6,7 L=6, R=P=6

#include <iostream>
#include <unistd.h>
using namespace std;
void print(int a[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    sleep(1);
}
int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap2(&a[i], &a[j]);
        }
    }
    swap2(&a[i + 1], &a[high]);
    return i + 1;
}
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(a, low, high);
        quickSort(a, low, pivot - 1);
        quickSort(a, pivot + 1, high);
    }
}
int main()
{
    int n = 10;
    int a[n] = {10, 16, 8, 12, 15, 6, 3, 9, 5, 100};
    print(a, n);
    quickSort(a, 0, n - 1);
    print(a, n);
    return 0;
}
