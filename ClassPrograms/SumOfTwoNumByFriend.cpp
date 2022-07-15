#include <iostream>
using namespace std;
class SumOfTwo
{
private:
    int a, b,c;

public:
    friend int sum(SumOfTwo A);
    void setNum(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNum()
    {
        cout << a << endl;
        cout << b << endl;
    }
};
int sum(SumOfTwo A)
{
    return A.a + A.b;
}
int main()
{
    SumOfTwo s1, s2;
    s1.setNum(4, 5);
    s1.printNum();
    int res = sum(s1);
    cout << res;
    return 0;
}