#include <iostream>
#include <cstring>
using namespace std;
class balance
{
    double curBal;
    char name[25];

public:
    void set(double n, char *s)
    {
        curBal = n;
        strcpy(name, s);
    }
    void printBal()
    {
        cout << name << " balance is " << curBal << endl;
    }
    void getBal(double &n, char *s)
    {
        n = curBal;
        strcpy(s, name);
    }
};
int main()
{
    balance *p; // point to object
    char s[25];
    double n;
    try
    {
        p = new balance;
    }
    catch (bad_alloc aa)
    {
        cout << "allocation failed" << endl;
        return 1;
    }
    p->set(12337.87, (char*)"sanjay");
    p->getBal(n, s);
    p->printBal();
    //cout << s << "S's balance is : " << n << endl;
    delete p; // pointer will be removed
    //p->getBal(n, s);
    p->printBal();
    //cout << s << "S's balance is : " << n << endl;
    return 1;
}