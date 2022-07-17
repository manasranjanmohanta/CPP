#include <iostream>
using namespace std;

class Num
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
        cout << "The value is : " << a << endl;
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
    void operator--(int) // post decrement
    {
        a--;
    }
};
int main()
{
    Num obj;
    obj.assign(69);
    obj.show();
    obj++;
    obj.show();
    ++obj;
    obj.show();
    --obj;
    obj.show();
    obj--;
    obj.show();

    return 0;
}