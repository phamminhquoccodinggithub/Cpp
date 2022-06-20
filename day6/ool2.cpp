#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

public:
    loc()
    {
    }
    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void display()
    {
        cout << longitude << " " << latitude << endl;
    }
    friend loc operator+(loc op1, int op2);
    friend loc operator+(int op1, loc op2);
};
loc operator+(loc op1, int op2)
{
    loc temp;
    temp.longitude = op1.longitude + op2;
    temp.latitude = op1.latitude + op2;
    return temp;
}
loc operator+(int op1, loc op2)
{
    loc temp;
    temp.longitude = op2.longitude + op1;
    temp.latitude = op2.latitude + op1;
    return temp;
}
int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(7, 14);
    ob1.display();
    ob2.display();
    ob3.display();

    ob1 = ob2 + 10;
    ob3 = 20 + ob2;
    ob1.display();
    ob3.display();

    return 1;
}