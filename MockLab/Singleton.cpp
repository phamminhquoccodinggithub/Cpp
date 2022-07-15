#include <iostream>
using namespace std;
class Singleton
{
private:
    static Singleton *instance;
    Singleton();

public:
    static Singleton *getInstance();
};

Singleton *Singleton::instance = 0;

Singleton *Singleton::getInstance()
{
    if (!instance)
    {
        instance = new Singleton();
    }
    return instance;
}

Singleton::Singleton()
{
}

int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}