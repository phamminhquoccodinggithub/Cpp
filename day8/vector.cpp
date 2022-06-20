#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> ar = {1, 2, 3, 4, 5};
    vector<int>::iterator it1 = ar.begin();
    vector<int>::iterator it2 = ar.end();
    vector<int>::iterator it3;
    vector<int>::iterator it4;
    it3 = next(it1, 3);
    it4 = prev(it2, 2);
    cout << "*it3 points to " << *it3 << endl;
    cout << "*it4 points to " << *it4 << endl;
    return 0;
}