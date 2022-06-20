#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;

    int i;
    cout << "vector size " << vec.size() << endl;
    for (i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    for (i = 0; i < 5; i++)
    {
        vec.pop_back(i);
    }
    cout << "vector size " << vec.size() << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }
    // another way to access
    vector<int>::iterator v = vec.begin();
    while (v != vec.end())
    {
        cout << " " << *v;
        v++;
    }
    cout << endl;
    // another way
    vector<int>::iterator v2 = vec.end() - 1;
    while (v2 >= vec.begin())
    {
        cout << " " << *v2;
        v2--;
    }
    cout << endl;
    // test
    vector<float> vec2;
    for (float j = 0.2; j < 5; j++)
    {
        vec2.push_back(j);
    }
    cout << endl;
    vector<float>::iterator v4 = vec2.begin();
    while (v4 != vec2.end())
    {
        cout << " " << *v4;
        v4++;
    }
    cout << endl;
    vector<float>::iterator v3 = vec2.end() - 1;
    while (v3 >= vec2.begin())
    {
        cout << " " << *v3;
        v3--;
    }
    cout << endl;
    return 0;
}