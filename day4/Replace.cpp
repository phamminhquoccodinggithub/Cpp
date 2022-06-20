// A function might return a reference
#include <iostream>
using namespace std;
char s[25] = " Hello VietNam";
char &replace(int i)
{
    return s[i];
}
int main()
{
    replace(7) = 'W';
    cout << s << endl;
    return 1;
}