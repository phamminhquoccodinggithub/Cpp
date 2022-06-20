#include <iostream>
using namespace std;
void test(int test)
{
    cout << "inside test block test is " << test << endl;
    if (test) // if test is != 0
    {
        throw test;
    }
}
int main()
{
    cout << "Start\n";
    try
    {
        cout << "Inside try block\n";
        test(0);
        test(1);
        test(2);
    }
    catch (int i)
    {
        cout << "caught exception " << i << endl;
    }

    return 0;
}