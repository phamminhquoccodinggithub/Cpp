#include <iostream>
using namespace std;
int square(int *i)
{
    return *i * *i;
}
int main()
{
    int i=4;
    int *p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<square(p)<<endl;
    int x=10;
    cout<<x<<endl;
    cout<<square(&x)<<endl;
    cout<<x<<endl;
    return 1;
}