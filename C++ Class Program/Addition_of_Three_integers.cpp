// Addition of three integers using friend functions.
// using three classe to takes 1 intgers
#include <iostream>
using namespace std;
class Number2;
class Number3;
class Number1
{
private:
    float a;

public:
    void read()
    {
        cout << "Enter the first integer : ";
        cin >> a;
    }
    friend float add(Number1, Number2, Number3);
};
class Number2
{
private:
    float b;

public:
    void read()
    {
        cout << "Enter the second integer : ";
        cin >> b;
    }
    friend float add(Number1, Number2, Number3);
};
class Number3
{
private:
    float c;

public:
    void read()
    {
        cout << "Enter the third integer : ";
        cin >> c;
    }
    friend float add(Number1, Number2, Number3);
};
float add(Number1 obj1, Number2 obj2, Number3 obj3)
{
    float sum = obj1.a + obj2.b + obj3.c;
    return sum;
}
int main()
{
    Number1 A;
    Number2 B;
    Number3 C;
    A.read();
    B.read();
    C.read();
    float res = add(A, B, C);
    cout << "Addition of three integers is : " << res << endl;
    return 0;
}
