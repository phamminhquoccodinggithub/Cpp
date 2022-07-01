#include <iostream>
using namespace std;
template <class T, class U>
T add(T t, U u)
{
    return t + u;
}
int main()
{
    int a = 3;
    float b = 5.5;
    double c = 6.6;
    //  It will be returned int value because of Overloadding with diff sequence 
    cout << add(a, b) << endl;
    //  It will be returned float value because of Overloadding with diff sequence 
    cout << add(b, a) << endl;
    //  It will be returned double value because of Overloadding with diff sequence 
    cout << add(c, a) << endl;
    return 0;
}