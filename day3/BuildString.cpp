#include <iostream>
using namespace std;
class Strng
{
    string str;
    string strcp;

public:
    void inputString()
    {
        cout << "Enter string: ";
        cin >> str;
    }
    void displayString()
    {
        cout << "Reverst string: ";
        getRev();
        cout << "Copy string: " << makeCopy() << endl;
        cout << "Compare with 'HCLVIETNAM'" << endl;
        cout << "Result: " << cmpString("HCLVIETNAM") << endl;
    }
    void getRev()
    {
        for (int i = str.size() - 1; i >= 0; i--)
        {
            cout << str[i];
        }
        cout << endl;
    }
    string makeCopy()
    {
        strcp = str;
        return strcp;
    }
    int cmpString(string s)
    {
        if (str == s)
        {
            return 0;
        }
        else if (str > s)
        {
            return 1;
        }
        else
            return -1;
    }
    void getUpper(){
        for (int i = str.size() - 1; i >= 0; i--)
        {
            str[i]=str[i];
        }
        cout << endl;
    }
};
int main()
{
    Strng st;
    st.inputString();
    st.displayString();
    return 1;
}