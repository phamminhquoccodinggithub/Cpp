#include <iostream>
#include <new>
using namespace std;
class loc
{
    int longtitude, latitude;

public:
    loc(){};
    loc(int lg, int lt)
    {
        longtitude = lg;
        latitude = lt;
    }
    void display()
    {
        cout << longtitude << " " << latitude << endl;
    }
    void *operator new[](size_t size)
    {
        void *p;
        cout << "In overload new []\n";
        p = malloc(size);
        if (!p)
        {
            bad_alloc ba;
            throw ba;
        }
        return p;
    };
    void operator delete[](void *p)
    {
        cout << "In Overloadded delete []\n";
        free(p);
    };
};
int main()
{
    loc *p1, *p2;
    int i;
    try
    {
        p1 = new loc(10, 20);
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error for p1\n";
        return 1;
    }
    try
    {
        p2 = new loc[10];
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error for p2\n";
        return 1;
    }
    p1->display();
    for (i = 0; i < 10; i++)
    {
        p2[i].display();
    }

    delete p1;
    delete[] p2;
    p1->display();
    for (i = 0; i < 10; i++)
    {
        p2[i].display();
    }
    return 0;
}