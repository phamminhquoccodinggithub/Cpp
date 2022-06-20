#include <iostream>
using namespace std;
class grandfather
{
public:
    void house()
    {
        cout << "3 BHK house" << endl;
    }
};
class father : public grandfather
{
public:
    void land()
    {
        cout << "Hectares of land" << endl;
    }
};
class mother
{
public:
    void gold()
    {
        cout << "250 gms of gold" << endl;
    }
};
class child : public father, public mother
{
public:
    void car()
    {
        cout << "Audi car" << endl;
    }
};
int main()
{
    child c;
    c.house();
    c.land();
    c.gold();
    c.car();
    return 1;
}