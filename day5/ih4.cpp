#include <iostream>
using namespace std;
class Parent
{
public:
    int id_p;
};
class Child : public Parent
{
public:
    int id_c;
};
int main()
{
    Child ob1;
    ob1.id_c=7;
    ob1.id_p=91;
    cout<<"Child id is: "<<ob1.id_c<<endl;
    cout<<"Parent id is: "<<ob1.id_p<<endl;
    return 1;
}