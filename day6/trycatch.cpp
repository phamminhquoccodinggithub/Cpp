#include <iostream>
using namespace std;
int main()
{
    cout << "Start" << endl;
    try
    {
        cout << "inside try block\n";
        //throw 150;
        cout << "message after throw\n";
    }
    catch (int i)
    {
        cout << "caught exception\n";
        cout << i << endl;
    }
    cout << "End" << endl;

    return 1;
}