#include <stdio.h>
#include <iostream>
using namespace std;
int findFactorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	return findFactorial(n - 1) * n;
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Factorial of " << n << " is " << findFactorial(n)<<endl;
	return 1;
}
