#include <iostream>
using namespace std;
class STATIC
{
private:
    static int a;
    int n;

public:
    STATIC()
    {
        n = ++a;
    }
    void show()
    {
        cout << n << endl;
    }
};
int STATIC::a = 10;
int main()
{
    STATIC A, B, C;
    A.show();
    B.show();
    C.show();
    return 0;
}