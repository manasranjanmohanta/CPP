#include <iostream>
using namespace std;

class Number
{
    float num;

public:
    void assign(int a)
    {
        num = a;
    }
    void show()
    {
        cout << num << endl;
    }
    Number operator+(Number obj)
    {
        Number temp;
        temp.num = num + obj.num;
        return temp;
    }
    Number operator-(Number obj)
    {
        Number temp;
        temp.num = num - obj.num;
        return temp;
    }
    Number operator*(Number obj)
    {
        Number temp;
        temp.num = num * obj.num;
        return temp;
    }
    Number operator/(Number obj)
    {
        Number temp;
        temp.num = num / obj.num;
        return temp;
    }
};
int main()
{
    Number A, B;
    A.assign(10);
    B.assign(20);

    Number C;
    // C = A + B;
    // A.show();
    // B.show();
    // C.show();
    C = A.operator+(B);
    C.show();

    return 0;
}