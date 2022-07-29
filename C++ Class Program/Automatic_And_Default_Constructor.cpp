#include <iostream>
using namespace std;
class Number
{
    float a;

public:
    Number()
    {
        a = 100;
    }
    void show();
};

void Number ::show()
{
    cout << "The value of a is : " << a << endl;
}
int main()
{
    Number n1;
    n1.show();
    return 0;
}