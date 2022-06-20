#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"try first"<<endl;
        throw 100;
        cout<<"try the second"<<endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 1;
}