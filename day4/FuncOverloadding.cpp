#include <iostream>
using namespace std;
float addNum(int a, float b)
{
    return a + b;
}
float addNum(float a, int b)
{
    return a + b;
}
void display(char *s, int n)
{
    for (int i = 0; i < n; i++)
        cout << *s << endl;
}
void display(int n, char *s)
{
    for (int i = 0; i < n; i++)
        cout << *s << endl;
}
int main()
{
    // cout << addNum(2, 5.5) << endl;
    // cout << addNum(1.1, 4) << endl;
    display("h", 1);
    display(1, "o");
    return 1;
}
