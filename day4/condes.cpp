#include <iostream>
using namespace std;
class cl
{
    int id;

public:
    int i;
    cl(int i)
    {
        cout << "Constructing " << i << endl;
        id = i;
    }
    ~cl()
    {
        cout << "Destructing " << id << endl;
    }
    void neg(cl &obj)
    {
        obj.i = -obj.i;
    }
};
int main()
{
    cl obj(12);
    obj.i = -25;
    obj.neg(obj);
    cout << obj.i << endl;
    return 1;
}