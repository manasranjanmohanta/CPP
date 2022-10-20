// Sum and product of two numbers. using class templates
#include <iostream>
using namespace std;

template <class T>
class Number
{
private:
    T a, b;

public:
    void read()
    {
        cout << "Enter two numbers : ";
        cin >> a >> b;
    }
    void sum()
    {
        T res = 0;
        res = a + b;
        cout << "Sum is = " << res << endl;
    }
    void product()
    {
        T res = 0;
        res = a * b;
        cout << "Product is = " << res << endl;
    }
};
int main()
{
    Number<int> obj1;
    Number<float> obj2;

    cout << "Enter integers : " << endl;
    obj1.read();
    cout << "Enter floats : " << endl;
    obj2.read();

    cout << "Integers: " << endl;
    obj1.sum();
    obj1.product();

    cout << "Floats: " << endl;
    obj2.sum();
    obj2.product();
    return 0;
}