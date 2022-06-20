#include <iostream>
#include <cstring>
using namespace std;
const int i = 1;
const int checked = 0;
class book
{
private:
    char author[15];
    char title[15];
    int status;

public:
    book(char *n, char *t, int s)
    {
        strcpy(author, n);
        strcpy(title, t);
        status = s;
    };
    void display()
    {
        cout << title << " by " << author << endl;
        cout << " is " << endl;
        if (status == i)
        {
            cout << " in\n";
        }
        else
        {
            cout << " out\n";
        }
    };
};

class MyClass
{
    int a, b;

public:
    MyClass(int i, int j)
    {
        a = i;
        b = j;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};

class Dog
{
private:
    char name[15];

public:
    Dog(char *n)
    {
        strcpy(name, n);
        
    };
    void display()
    {
        cout << name << endl;
    };
};

int main()
{
    Dog d("Bot");
    d.display();
    return 1;
}