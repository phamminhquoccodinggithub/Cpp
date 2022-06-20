#include <iostream>
usiung namespace std;
class Number
{
protected:
    int val;

public:
    void setValue(int i)
    {
        val = i;
    }
};
class HexType : public Number
{
public:
    void display()
    {
        cout <<hex << val << "\n";
    }
};
class DecType : public Number
{
public:
    void display()
    {
        cout << val << endl;
    }
};
class OctType : public Number
{    
public:
    void display()
    {
        cout <<oct << val << "\n";
    }
};
int main()
{
    DecType d;
    HexType h;
    OctType o;
    d.setValue(20);
    h.setValue(20);
    o.setValue(20);
    d.display();
    h.display();
    o.display();
    return 1;
}