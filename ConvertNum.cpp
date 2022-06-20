#include <stdio.h>
#include <iostream>
using namespace std;
int countLen(int n)
{
        int count = 0;
        while (n != 0)
        {
                n = n / 10;
                count++;
        }
        return count;
}

void printWord(int n)
{
        switch (n)
        {
        case 1:
                cout << "one ";
                break;
        case 2:
                cout << "two ";
                break;
        case 3:
                cout << "three ";
                break;
        case 4:
                cout << "four ";
                break;
        case 5:
                cout << "five ";
                break;
        case 6:
                cout << "six ";
                break;
        case 7:
                cout << "seven ";
                break;
        case 8:
                cout << "eight ";
                break;
        case 9:
                cout << "nine ";
                break;
        case 0:
                cout << "zero ";
                break;
        default:
                cout << "none";
                break;
        }
}

int main()
{
        int n;
        cout << "Enter a number: ";
        cin >> n;
        int digit = 0;
        int len = countLen(n);
        int arr[len];
        int sum = 0;
        while (n != 0)
        {
                digit = n % 10;
                sum = digit + sum * 10;
                n = n / 10;
        }
        while (sum != 0)
        {
                digit = sum % 10;
                printWord(digit);
                sum = sum / 10;
        }

        return 1;
}
