#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    char c1[] = "HCLVietNam";
    char c2[10];
    char c3[] = "hclvietnam";
    string str = "HCL";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "2 int number: " << endl;
        int a, b;
        cin >> a >> b;
        cout << "sum: " << a + b << endl;
        cout << "sub: " << a - b << endl;
        cout << "Mul: " << a * b << endl;
        cout << "Div: " << a / b << endl;
        break;
    case 2:
        cout << "2 double number: " << endl;
        double c, d;
        cin >> c >> d;
        cout << "sum: " << c + d << endl;
        cout << "sub: " << c - d << endl;
        cout << "Mul: " << c * d << endl;
        cout << "Div: " << c / d << endl;
        break;
    case 3:
        cout << "copy string 1 to string 2\n";
        cout << "string 1: " << c1 << endl;
        strcpy(c2, c1);
        cout << "string 1: " << c1 << endl;
        cout << "string 2: " << c2 << endl;
        break;
    case 4:
        cout << "string length\n";
        cout << "string 1: " << strlen(c1) << endl;
        cout << "string compare\n";
        cout << "compare c1 and c3: " << strcmp(c1, c3) << endl;
        break;
    default:
        cout << "try again\n";
        break;
    }
    return 0;
}