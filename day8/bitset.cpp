#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bitset<4> bset1(9);//1001
    bitset<4> bset2(3);//0011
    cout<<(bset1==bset2)<<endl;
    cout<<(bset1!=bset2)<<endl;
    //bitwise operation
    cout<<(bset1^=bset2)<<endl;
    cout<<(bset1&=bset2)<<endl;
    cout<<(bset1|=bset2)<<endl;

    cout<<(bset1<<=2)<<endl;
    cout<<(bset1>>=1)<<endl;

    cout<<(bset1&bset2)<<endl;
    cout<<(bset1|bset2)<<endl;
    cout<<(bset1^bset2)<<endl;
    return 0;
}