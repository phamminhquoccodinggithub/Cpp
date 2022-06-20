#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // sleep(1);
}
void bubbleSort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < (n - i - 1); ++j)
        {
            if (a[j + 1] < a[j])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
void insertionSort(int a[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
void selectionSort(int a[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + i; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }            
        }
        swap(a[i], a[min]);
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[12] = {4, 2, 1, 5, 6, 9, -2, -5, -7, 3, -8, 10};
    // bubbleSort(a, 12);
    // insertionSort(a, 12);
    selectionSort(a, 12);
    display(a, 12);
    return 0;
}