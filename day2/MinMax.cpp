#include <iostream>
using namespace std;
class ThreeValues
{
    int a, b, c;

public:
    ThreeValues(int i, int j, int k)
    {
        a = i;
        b = j;
        c = k;
    }
    friend class Min;
    friend class Max;
};
class Min
{
public:
    int getMin(ThreeValues x)
    {
        return (x.a < x.b) ? (x.a < x.c) ? x.a : x.c : (x.b < x.c) ? x.b
                                                                   : x.c;
    }
};
class Max
{
public:
    int getMax(ThreeValues x)
    {
        return (x.a > x.b) ? (x.a > x.c) ? x.a : x.c : (x.b > x.c) ? x.b
                                                                   : x.c;
    }
};
int main()
{
    ThreeValues ob(1, 2, 3);
    Min min;
    cout << "Min is: " << min.getMin(ob) << endl;
    Max max;
    cout << "Max is: " << max.getMax(ob) << endl;
    return 1;
}