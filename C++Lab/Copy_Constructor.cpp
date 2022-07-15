#include <iostream>
using namespace std;

class Number
{
    float a;

public:
    Number()
    {
        a = 69;
    }
    Number(int b)
    {
        a = b;
    }
    Number(Number &obj)
    {
        a = obj.a;
    }
    void show()
    {
        cout << "The value of a is : " << a << endl;
    }
};
int main()
{
    Number n1;
    Number n2(281);
    Number n3(n1);

    n1.show();
    n2.show();
    n3.show();

    return 0;
}