#include <iostream>
using namespace std;
namespace first
{
    int val = 500;
}
int val = 100;
int main()
{
    int val = 1;
    cout << first::val << endl;
    return 0;
}