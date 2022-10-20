/* Write a C++ program using constructor overloading */

#include <iostream>
using namespace std;

class A
{
private:
    int a, b;

public:
    A() // default constructor
    {
        a = 0;
    }
    A(int b) // parameterized constructor
    {
        a = b;
    }

    void show()
    {
        cout << a << endl;
    }
};

int main()
{
    A a1 = A();
    A a2 = A(45);

    a1.show();
    a2.show();
    return 0;
}
