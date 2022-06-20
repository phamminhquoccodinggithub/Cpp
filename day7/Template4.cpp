#include <iostream>
using namespace std;
template <class H>
void swapArg(H &a, H &b)
{
    H temp;
    temp = a;
    a = b;
    b = temp;
    cout << "inside template swaprgs" << endl;
}
swapArg(int &a, int &b){
    
}
int main()
{
    return 0;
}