#include <iostream>
using namespace std;

class Sum
{
private:
    int a, b;

public:
    virtual void read()
    {
        cout << "Enter two numbers : ";
        cin >> a >> b;
    }
    virtual void result()
    {
        cout << "The sum is : " << a + b << endl;
    }
};
class Product : public Sum
{
private:
    int a, b;

public:
    void read()
    {
        cout << "Enter two numbers : ";
        cin >> a >> b;
    }
    void result()
    {
        cout << "The product is : " << a * b << endl;
    }
};
int main()
{
    Sum obj1, *p;
    Product obj2;

    p = &obj1;
    p->read();
    p->result();

    p = &obj2;
    p->read();
    p->result();

    return 0;
}