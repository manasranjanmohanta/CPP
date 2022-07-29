#include <iostream>
using namespace std;
class Number
{
    float a;

public:
    Number(int);
    void show();
};
Number ::Number(int b)
{
    a = b;
}
void Number ::show()
{
    cout << "The value of a is : " << a << endl;
}
int main()
{
    Number n1(69); // Implicit way to call a constructor
    Number n2 = Number(281); // Explicit way to call constructor
     
    n1.show();
    n2.show();

    return 0;
}