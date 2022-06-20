#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[] = "Quoc";
    int len = strlen(str);
    cout << "Leng: " << len << endl;
    char str2[] = "Hello World";
    cout << "Result of strcmp: " << strcmp(str, str2) << endl;
    //cout << strrev(str) << endl;    
    cout << "Result of strcat is " << strcat(str, str2) << endl;
    char b = 'b'; char B = 'B';
    cout << "To upper of b (ascii value) is " << toupper(b) << endl;
    cout << "To upper of b is " << (char)toupper(b) << endl;
    cout << "To lower of B (ascii value) is "  << tolower(B) << endl;
    cout << "To upper of b is "  << (char)tolower(B) << endl;
    return 1;
}