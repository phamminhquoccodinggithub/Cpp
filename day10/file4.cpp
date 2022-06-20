// create and write binary file
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
struct status
{
    char nam[50];
    double balance;
    unsigned long accountNumber;
};

int main()
{
    struct status acc;
    strcpy(acc.nam, "ANIL");
    acc.balance = 50000;
    acc.accountNumber = 1234556782;
    // write data
    ofstream outBalance("balance", ios::out | ios::binary);

    if (!outBalance)
    {
        cout << "cannot open file\n";
        return 1;
    }
    outBalance.write((char *)&acc, sizeof(acc));
    outBalance.close();
    ifstream inBalance("balance", ios::in | ios::binary);
    if (!inBalance)
    {
        cout << "cannot open file\n";
        return 1;
    }
    inBalance.read((char *)&acc, sizeof(acc));
    cout << acc.nam << endl;
    cout << acc.accountNumber << endl;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << acc.balance << endl;
    inBalance.close();
    return 0;
}