#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = n; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 1;
}
