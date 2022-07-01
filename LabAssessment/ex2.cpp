#include <iostream>
using namespace std;
class Animal
{
public:
    void print()
    {
        cout << "base class\n";
    }
    void sound()
    {
        cout << "animal sound: \n";
    };
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Go Go" << endl;
    }
};
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Mew Mew\n";
    }
};
class Duck : public Animal
{
public:
    void sound()
    {
        cout << "Quack Quack\n";
    }
};
int main()
{
    Animal a;
    Dog d;
    Cat c;
    Duck dk;
    a.sound();
    d.sound();
    c.sound();
    dk.sound();
    return 0;
}