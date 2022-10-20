#include <iostream>
using namespace std;
class Destructor
{
private:
    float a, b;

public:
    Destructor()
    {
        a = 0;
        b = 10;
    }
    void show()
    {
        cout << "A = " << a << endl;
    }
    ~Destructor()
    {
        cout << "B = " << b << endl;
    }
};
int main()
{
    Destructor A;
    A.show();
    return 0;
}