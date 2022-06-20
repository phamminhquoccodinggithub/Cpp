#include <iostream>
using namespace std;
int square(int i)
{
    return i * i;
}
double square(double i)
{
    return i * i;
}
float square(float i)
{
    return i * i;
}
int main()
{
    cout<<square(2)<<endl;
    cout<<square(2.4)<<endl;
    cout<<square(2.767)<<endl;
    return 1;
}