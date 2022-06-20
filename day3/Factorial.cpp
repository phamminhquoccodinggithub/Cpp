#include <iostream>
using namespace std;

class Factorial
{
public:
    int countFact(int n)
    {
        if (n == 1 || n == 0)
        {
            return 1;
        }
        return n * countFact(n - 1);
    }
    int countNCR(int n, int r)
    {
        return countFact(n) / (countFact(r) * countFact(n - r));
    }
};
int main()
{
    Factorial f, *ob;
    cout << f.countNCR(3, 1) << endl;
    ob = &f;
    cout << ob->countNCR(3, 1) << endl;
    return 1;
}