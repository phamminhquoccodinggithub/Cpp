#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Hello world";
    sort(str.begin(), str.end(), greater<char>());
    // sort(str.begin(), str.end());
    cout << str << endl;
    return 0;
}