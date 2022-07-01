#include <iostream>
using namespace std;
// Function overloading with diff type
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}
//====
// Function overloadding with diff number args
int sub(int a, int b, int c)
{
    return a - b - c;
}
int sub(int a, int b)
{
    return a - b;
}
//====
// Function overloadding with diff sequence
float div(int a, float b)
{
    return a / b;
}
float div(float a, int b)
{
    return a / b;
}
int main()
{
    int a = 1, b = 2, c = 3;
    float d = 3.3, f = 4.4;
    cout << add(a, b) << endl;
    cout << add(d, f) << endl;
    cout << sub(a, b, c) << endl;
    cout << sub(a, b) << endl;
    cout << div(a, d) << endl;
    cout << div(d, a) << endl;
    return 0;
}