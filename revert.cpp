#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number \n";
	cin >> n;
	while (n != 0)
	{
		cout << n % 10 << " ";
		n = n / 10;
	}
	return 1;
}
