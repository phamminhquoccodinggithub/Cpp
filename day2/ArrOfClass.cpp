#include <iostream>
using namespace std;
class ArrOfClass
{
private:
    int rNo;
    string nm;
    string gender;
    unsigned int age;
    float mark[3];
    float ttMark;

public:
    void inputData()
    {
        cout << "Roll number: ";
        cin >> rNo;
        cout << "Name: ";
        cin >> nm;
        cout << "Gender: ";
        cin >> gender;
        cout << "Age: ";
        cin >> age;
        for (int i = 0; i < 3; i++)
        {
            cout << "Mark of subject " << i << ": ";
            cin >> mark[i];
        }
    };
    float getTotalMark()
    {
        float sum = 0.0;
        for (int i = 0; i < 3; i++)
        {
            sum += mark[i];
        }
        return sum / 3;
    }
    void displayData()
    {
        cout << "==============================\n";
        cout << "Roll number: " << rNo << endl;
        cout << "Name: " << nm << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Mark[" << i << "]= " << mark[i] << " ";
        }
        cout << "\nTotal mark: " << getTotalMark() << endl;
    };
};
int main()
{
    ArrOfClass o[2];
    for (int i = 0; i < 2; i++)
    {
        o[i].inputData();
        cout << "=========The next one==========\n";
    }
    cout << "=========Display==========\n";
    for (int i = 0; i < 2; i++)
    {

        o[i].displayData();
        cout << "=========The next one==========\n";
    }

    return 1;
}