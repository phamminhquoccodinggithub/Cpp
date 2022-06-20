#include <iostream>
using namespace std;
int main()
{
    unsigned int c;
    cout << "Enter a (+) number: ";
    cin >> c;
    for (int i = 31; i >= 0; i--)
    {
        (c & (1 << i)) ? cout << 1 : cout << 0;
    }
    return 1;
}