#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
template <typename Stack>
void print(Stack stack, int id)
{
    cout << " s" << id << "[" << stack.size() << "]: ";
    for (; !stack.empty(); stack.pop())
    {
        cout << stack.top() << ' ';
    }
    cout << (id > 1 ? "\n\n" : "\n");
}
int main()
{

    vector<string> v1{"1", "2", "3", "4"}, v2{"A", "B", "C", "D"};
    vector<int> v3{1,2,3,4}, v4{11,12,13,14};
    stack s1{move(v1)};
    stack s2{move(v2)};
    stack s3{move(v3)};
    stack s4{move(v4)};
    print(s1, 1);
    print(s2, 2);
    print(s3, 3);
    print(s4, 4);
    s1.swap(s2);
    s3.swap(s4);
    print(s1, 1);
    print(s2, 2);
    print(s3, 3);
    print(s4, 4);
    return 0;
}