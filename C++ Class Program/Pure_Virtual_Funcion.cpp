#include <iostream>
using namespace std;
// Parent class or Abstract class / or pure abstract class
class Numbers
{
public:
    virtual void read() = 0;
    virtual void result() = 0;
};


// Derived class or child class or concrete class 
class Sum : public Numbers
{
    float a, b;

public:
    void read()
    {
        cout << "Enter two numbers for sum : ";
        cin >> a >> b;
    }
    void result()
    {
        cout << "Sum of " << a << " and " << b << " is : " << a + b << endl;
    }
};

// Derived class or child class or concrete class 
class Product : public Numbers
{
    float a, b;

public:
    void read()
    {
        cout << "Enter two numbers for product : ";
        cin >> a >> b;
    }
    void result()
    {
        cout << "Sum of " << a << " and " << b << " is : " << a * b << endl;
    }
};

int main()
{
    cout << "Size of Numbers :" << sizeof(Numbers) << endl;
    cout << "Size of Sum :" << sizeof(Sum) << endl;
    cout << "Size of Product :" << sizeof(Product) << endl;
    Sum s1;
    Product p1;
    s1.read();
    p1.read();
    s1.result();
    p1.result();

    return 0;
}