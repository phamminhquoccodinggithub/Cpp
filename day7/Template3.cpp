#include <iostream>
using namespace std;
template <class type1, class type2>
void myFunc(type1 t1, type2 t2)
{
    cout << t1 << " " << t2 << endl;
}
int main(){
    myFunc(10,"I hate it");
    return 0;
}