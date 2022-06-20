#include <iostream>
#include <fstream>
using namespace std;
void checkStatus(ifstream &in)
{
    ios::iostate i;
    i = in.rdstate();
    if (i & ios::eofbit)
    {
        cout << "EOF encountered\n";
    }
    else
    {
        if (i & ios::failbit)
        {
            cout << "non fatal I/O error";
        }
        else
        {
            if (i & ios::badbit)
            {
                cout << "Fatal I/O error\n";
            }
        }
    }
}
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "error" << endl;
        return 1;
    }
    ifstream in(argv[1]);
    if (!in)
    {
        cout << "cannot open \n";
        return 1;
    }
    char c;
    while (!in.get(c))
    {
        checkStatus(in);
    }
    checkStatus(in);
    in.close();
    return 0;
}