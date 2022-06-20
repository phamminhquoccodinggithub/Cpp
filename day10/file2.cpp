#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "usage output filename" << endl;
        return 1;
    }
    ofstream out(argv[1]);
    if (!out)
    {
        cout << "unable to open file" << endl;
        return 1;
    }
    char str[50];
    cout << "write strings to disk. Enter ! to stop\n";
    do
    {
        cout << ": ";
        cin >> str;
        out << str << endl;
    } while (*str != '!');
    out.close();
    return 0;
}