#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
class phonebook
{
public:
    char name[50];
    int areacode;
    int prefix;
    int num;
    // these inserters cannot be class members so we cannot have overloaded inserters
    phonebook(char *n, int a, int p, int nm) // >> inserts
    {
        strcpy(name, n);
        areacode = a;
        prefix = p;
        num = nm;
    }
    friend ostream &operator<<(ostream &stream, phonebook o);
};
ostream &operator<<(ostream &stream, phonebook o)
{
    stream << o.name << " "; // << >> to preform stream related operations, perform I/O
    stream << "(" << o.areacode << ") ";
    stream << o.prefix << "-" << o.num << "\n";
    return stream;
};
int main()
{
    phonebook a("abc", 111, 222, 3333);
    phonebook b("xyz", 121, 242, 5633);
    cout << a << b << endl;
    return 0;
}