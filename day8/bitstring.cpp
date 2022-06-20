#include <iostream>
#include <bits/stdc++.h>
#include <bitset>
#include <string>
using namespace std;
int main()
{
    string bit_string = "110010";
    bitset<8> b1(bit_string);// 00 110010
    //from 2 to end
    bitset<8> b2(bit_string, 2);    // 0000 0010
    //from 2 till next 3 positions
    bitset<8> b3(bit_string, 2, 3); // 00000 001
    cout << b1 << endl;
    cout << b2 << endl;
    cout << b3 << endl;
    return 0;
}