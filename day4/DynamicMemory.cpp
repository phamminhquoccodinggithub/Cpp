#include <iostream>
#include <new>
#include <string>
using namespace std;
int main()
{
    int *ptr = NULL;
    double *myArr = NULL;
    ptr = new int();
    int *v = new int(5);
    myArr = new double[5];
    if (!myArr)
    {
        cout << "MyArr not allocated " << endl;
    }
    else
    {
        cout << "myArr allocated" << endl;
        for (int i = 0; i < 5; i++)
            myArr[i] = i;
        for (int i = 0; i < 5; i++)
            cout << myArr[i] << " ";
        cout << endl;
    }
    if (!ptr)
    {
        cout << "Bad allocation" << endl;
    }
    else
    {
        cout << "Mem successfully allocated" << endl;
        *ptr = 15;
        cout << "*ptr is " << *ptr << endl;
        cout << "*v = " << *v << endl;
        delete ptr;
        delete v;
        delete[] myArr;
        //cout << "*ptr is " << *ptr << endl;
        //cout << "*v = " << *v << endl;
        for (int i = 0; i < 5; i++)
            cout << myArr[i] << " ";
        cout << endl;
    }
}