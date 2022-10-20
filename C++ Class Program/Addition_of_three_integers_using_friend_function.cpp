// Addition of three integers using friend functions.
#include <iostream>
using namespace std;
class AddThreeInt
{
private:
    float a, b, c;

public:
    void read()
    {
        cout << "Enter three integers : ";
        cin >> a >> b >> c;
    }
    void show()
    {
        cout << "The integers are :" << a << " "<< b << " " << c << endl;
    }
    friend float addition(AddThreeInt);
};
float addition(AddThreeInt obj)
{
    float sum = 0;
    sum = obj.a + obj.b + obj.c;
    return sum;
}
int main()
{
    AddThreeInt A;
    A.read();
    A.show();
    float res;
    res = addition(A);
    cout << "Addition of three integers is : " << res << endl;
    return 0;
}
