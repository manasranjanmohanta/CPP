/* Write a C++ program using pure abstract class. */

#include <iostream>
using namespace std;

class Numbers
{
public:
    virtual void read() = 0;
    virtual void result() = 0;
};

class Sum : public Numbers
{
private:
    float a, b;

public:
    void read()
    {
        cout << "Enter two numbers : " << endl;
        cin >> a >> b;
    }
    void result()
    {
        cout << "Addition of two numbers : " << (a + b) << endl;
    }
};
class Product : public Numbers
{
private:
    float a, b;

public:
    void read()
    {
        cout << "Enter two numbers : " << endl;
        cin >> a >> b;
    }
    void result()
    {
        cout << "Product of two numbers : " << (a * b) << endl;
    }
};

int main()
{
    Sum s;
    s.read();
    s.result();

    Product p;
    p.read();
    p.result();

    return 0;
}
