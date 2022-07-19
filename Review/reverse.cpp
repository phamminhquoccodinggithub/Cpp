#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    string arr = "helloworld";
    cout<<arr<<endl;
    // reverse(arr.begin(), arr.end());
    // cout<<arr;
    for (int i = 0; i < arr.length()/2; i++)
    {
        swap(arr[i], arr[arr.length()-1-i]);
    }
    cout<<arr;
    return 0;
}