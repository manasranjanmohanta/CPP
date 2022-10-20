// Constructor in multiple inheritance
/* i) default constructor in multiple inheritance
 iii) parameterized constructor in both base and derived class
 */
// #include <iostream>
// using namespace std;
// class Base1
// {
// public:
//     Base1()
//     {
//         cout << "Constructor of Base1 class" << endl;
//     }
// };
// class Base2
// {
// public:
//     Base2()
//     {
//         cout << "Constructor of Base2 class" << endl;
//     }
// };
// class Derived : public Base1, Base2
// {
// public:
//     Derived()
//     {
//         cout << "Constructor of Derived class" << endl;
//     }
// };
// int main()
// {
//     Derived d1;
//     return 0;
// }

//   ii) parameterized constructor in derived class
#include <iostream>
using namespace std;
class Base1
{
    int a;

public:
    Base1(int x)
    {
        a = x;
        cout << a << endl;
    }
};
class Base2
{
    int a;

public:
    Base2(int x)
    {
        a = x;
        cout << a << endl;
    }
};
class Derived : public Base1, Base2
{
public:
    Derived(int a, int b, int c) : Base1(a), Base2(b)
    {
        a = c;
        cout << a << endl;
    }
};
int main()
{
    Derived d1(20, 56, 34);
    return 0;
}
