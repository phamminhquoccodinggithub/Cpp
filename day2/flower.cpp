#include <iostream>
using namespace std;

class Flower
{
private:
    string nm;
    string clr;

public:
    void displayDetail()
    {
        cout << "Name of flower: " << nm << " -- Color: " << clr << endl;
    };
    void inputColor()
    {
        cout << "Type the name of flower: ";
        cin >> nm;
        cout << "Type the color of flower: ";
        cin >> clr;
    };
};
int main()
{
    Flower f;
    f.inputColor();
    f.displayDetail();
    return 1;
}