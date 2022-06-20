#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (int j = 9; j >= 0; j--)
		cout << arr[j]<<" ";
	return 0;
}
