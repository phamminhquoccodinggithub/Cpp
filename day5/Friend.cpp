#include <iostream>
using namespace std;
class base
{
    friend void display();
};

class derived : public base
{
};
void base::display()
{
    cout << "Hello000" << endl;
}
int main()
{
    derived d;
    d.hello();
    d.display();
    return 1;
}