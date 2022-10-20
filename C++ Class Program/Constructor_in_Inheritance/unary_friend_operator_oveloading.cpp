#include <iostream>
using namespace std;
class Operator
{
private:
    int a;

public:
    void assign(int b)
    {
        a = b;
    }
    void show()
    {
        cout << "A = " << a << endl;
    }
    friend void operator-(Operator &obj)
    {
        if (obj.a < 0)
        {
            obj.a = obj.a * (-1);
        }
    }
};
int main()
{
    Operator obj1, obj2;
    obj1.assign(7);
    obj2.assign(-45);

    obj1.show();
    obj2.show();

    -obj1;
    -obj2;

    obj1.show();
    obj2.show();

    return 0;
}