// parameterized constructor in derived class
#include <iostream>
using namespace std;
class Base
{
public:
    Base(int a)
    {
        cout << "Base class constructor" << endl;
    }
};
class Derived : public Base
{
public:
    Derived(int a) : Base(a)
    {
        cout << "Derived class consructor" << endl;
    }
};
int main()
{
    Derived obj(1);
    return 0;
}