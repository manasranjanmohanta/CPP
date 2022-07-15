#include <iostream>
using namespace std;
class Number
{
    float a;

public:
    Number(int b = 0)
    {
        a = b;
    }
    void show()
    {
        cout << "The value of a is : " << a << endl;
    }
};
int main()
{
    Number n1;
    Number n2(69);
    Number n3 = Number(281);
    Number n4 = 27;

    n1.show();
    n2.show();
    n3.show();
    n4.show();
    return 0;
}