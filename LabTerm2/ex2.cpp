#include <iostream>
#include <stack>
using namespace std;
int main()
{
    cout<<"Stack of int\n";
    //Stack of integer
    stack<int> sInt;
    sInt.push(1);
    sInt.push(2);
    sInt.push(3);
    sInt.push(4);
    while (!sInt.empty())
    {
        cout << sInt.top() << " ";
        sInt.pop();
    }
    cout << endl;
    cout<<"Stack of char\n";
    //Stack of char
    stack<char> sChar;
    sChar.push('A');
    sChar.push('B');
    sChar.push('C');
    sChar.push('D');
    while (!sChar.empty())
    {
        cout << sChar.top() << " ";
        sChar.pop();
    }
    cout << endl;
    return 0;
}