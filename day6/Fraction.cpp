#include <iostream>
using namespace std;
void handleFraction(int a, int b)
{
    cout << "Fraction: " << a << "/" << b << endl;
    if (!b) // if b = 0
    {
        throw b;
    }
}
int getDivided(int a, int b){
    if (!b) // if b = 0
    {
        throw b;
    }
    return a/b;
}
int main()
{
    /*try
    {
        handleFraction(4, 0);
        handleFraction(1, 2);
        handleFraction(3, 4);
        handleFraction(1, 0);
    }
    catch (int i)
    {
        cout << "Caught exception " << i << endl;
    }*/

    try
    {
        cout<<"Get divided"<<endl;
        cout<<getDivided(6,3)<<endl;
        cout<<getDivided(5,0)<<endl;
        cout<<getDivided(9,3)<<endl;
    }
    catch(int i)
    {
        cout << "Caught exception " << i << endl;
    }
    


    return 0;
}