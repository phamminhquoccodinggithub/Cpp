#include <iostream>
using namespace std;
class Car
{
    string brnd;
    string mNo;
    string hPwr;
    string dt;
    float prc;
    float spd;

public:
    void inputDetail()
    {
        cout << "Enter brand: ";
        cin >> brnd;
        cout << "Enter model number: ";
        cin >> mNo;
        cout << "Enter horse power: ";
        cin >> hPwr;
        cout << "Enter date of manufacture: ";
        cin >> dt;
        cout << "Enter price: ";
        cin >> prc;
        cout << "Enter speed: ";
        cin >> spd;
    };
    void outputDetail()
    {
        cout << "========================" << endl;
        cout << "Car detail: " << endl;
        cout << "Brand: " << brnd << " -- Model Number: " << mNo << endl;
        cout << "Horse power: " << hPwr << " -- Date of manufacture " << dt << endl;
        cout << "Price: " << prc << " $"<< endl;
    };
    int getStatus()
    {
        if (spd > 0)
            return 1;
        return 0;
    };
    int getSpeed()
    {
        return spd;
    };
};
int main()
{
    Car c;
    c.inputDetail();
    c.outputDetail();
    cout << "Speed of car is: " << c.getSpeed() << endl;
    if (c.getStatus() == 1)
	    cout << "Status: Car is moving" << endl;
    else
        cout << "Status: Car is not moving" << endl;
    return 1;
}
