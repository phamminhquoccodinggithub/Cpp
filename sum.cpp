#include <stdio.h>
#include <iostream>
using namespace std;
int countSum(int n)
{
	int count = 0;
	for (int i = 0; i <= n; i++)
	{
		count += i;
	}
	return count;
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "sum of series number to " << n << " is " << countSum(n);
	return 1;
}
