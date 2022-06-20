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
    loc operator+(loc op2)
    {
        loc temp;
        temp.longitude = op2.longitude + longitude;
        temp.latitude = op2.latitude + latitude;
        return temp;
    }
    loc operator++()
    {
        longitude++;
        latitude++;
        return *this;
    }
    loc operator-(loc op)
    {
        loc temp;
        temp.longitude = op.longitude - longitude;
        temp.latitude = op.latitude - latitude;
        return temp;
    }
};
int main()
{
    loc ob1(10, 40), ob2(5, 25), ob3(1, 1);
    ob1.display();
    ob2.display();

    ob1 = ob1 + ob2;
    ob1.display();
    ++ob1;
    ob1.display();

    // ob1 = ob1 - ob2;
    // ob1.display();
    ob2 = ++ob1;
    ob2.display();
    ob3.operator++();
    ob3.display();
    return 1;
}