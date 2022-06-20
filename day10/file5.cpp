// access file
#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Error" << endl;
        return 1;
    }
    ifstream in(argv[1], ios::in | ios::binary);
    if (!in)
    {
        cout << "could not open\n";
        return 1;
    }
    register int i, j;
    int count = 0;
    char c[15];
    cout.setf(ios::uppercase);
    while (!in.eof())
    {
        for (i = 0; i < 16 && !in.eof(); i++)
        {
            in.get(c[i]);
        }
        if (i < 16)
        {
            i--;
        }
        for (j = 0; j < i; j++)
        {
            cout << setw(3) << hex << (int)c[j];
        }
        for (; j < 16; j++)
        {
            cout << " ";
        }
        cout << "\t";
        for (j = 0; j < i; j++)
        {
            if (isprint(c[j]))
            {
                cout << c[j];
            }
            else
                cout << ".";
            //cout << endl;
        }
        count++;
        if (count == 16)
        {
            count = 0;
            cout << "press enter to continue";
            cin.get();
            cout << endl;
        }
    }
    in.close();

    return 0;
}