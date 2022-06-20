#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("inventory");
    if (!out)
    {
        cout << "cannot open inventory file \n";
        return 1;
    }
    out << "FM Radio" << 92.7 << endl;
    out << "FM Radio" << 72.8 << endl;
    out.close();
    ifstream r("inventory");
    string text;
    while (getline(r,text))
    {
        cout<<text;
    }
    r.close();
    
    return 0;
}