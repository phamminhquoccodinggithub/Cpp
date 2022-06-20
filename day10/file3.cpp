#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    char ch;
    if (argc != 2)
    {
        cout << "usage :PR<filename>" << endl;
        return 1;
    }
    ifstream in(argv[1], ios::in | ios::binary);
    if (!in)
    {
        cout << "cannot open file\n";
        return 1;
    }
    while (in)
    {
        in.get(ch);
        if (in)
        {
            cout<<ch;
        }
    }

    return 0;
}