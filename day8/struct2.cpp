#include <iostream>
#include <vector>
#include <list>
using namespace std;
struct stud
{
    int rno;
    char gender;
    string name;
    float mark;
};

int main()
{
    vector<stud> aos;
    vector<stud>::iterator it;
    stud s;
    for (int i = 0; i < 2; i++)
    {
        cin >> s.rno >> s.gender >> s.name >> s.mark;

        // aos.push_back(s);
        it = aos.begin();
        //aos.insert(it, s);
        //it=aos.insert(aos.begin()+1, s);
    }
    for (it = aos.begin(); it != aos.end(); it++)
    {
        cout << (*it).rno << " " << (*it).gender << " " << (*it).name << " " << (*it).mark << endl;
    }
    cout << endl;
    return 0;
}