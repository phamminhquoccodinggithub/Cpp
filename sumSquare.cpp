#include <stdio.h>
#include <iostream>
using namespace std;
int sumSquare(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i * i;
	}
	return sum;
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Sum of squares of first " << n << " numbers is " << sumSquare(n);
	return 1;
}
