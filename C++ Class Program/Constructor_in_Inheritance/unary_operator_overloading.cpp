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
    void operator++() // pre-increment
    {
        ++a;
    }
    void operator++(int) // post-increment
    {
        a++;
    }
    void operator--() // pre-decrement
    {
        --a;
    }
    void operator--(int) // post-decrement
    {
        a--;
    }
};
int main()
{
    Operator obj1, obj2;
    obj1.assign(7);
    obj2.assign(47);

    obj1.show();
    obj2.show();

    ++obj1;
    obj2++;

    obj1.show();
    obj2.show();

    obj1--;
    --obj2;

    obj1.show();
    obj2.show();

    return 0;
}