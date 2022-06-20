#include <iostream>
using namespace std;
struct student
{
    int id;
    string name;
    float mark;
};

int main()
{
    student s[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> s[i].id >> s[i].name >> s[i].mark;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << s[i].id << " " << s[i].name << " " << s[i].mark << endl;
        ;
    }

    return 0;
}