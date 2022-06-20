#include <stdio.h>
#include <iostream>
using namespace std;
int checkPrime(int n)
{
	int count = 0;
	if (n < 3)
		return 0;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 0)
		return 1;
	return 0;
}

int inputNumber(int n)
{
	cout << "Enter a number: \n";
	cin >> n;
	return n;
}
int main()
{
	for (int j = 2; j <= 50; j++)
	{
		if (checkPrime(j) == 1)
			cout << j << " ";
	}
	return 1;
}
