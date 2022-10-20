/* Write a C++ program to read two numbers. Find its division using exception handling
method */

#include <iostream>
using namespace std;

class Numbers
{
    float num1, num2, div;

public:
    void read()
    {
        cout << "Enter two numbers : ";
        cin >> num1 >> num2;
    }
    void result()
    {
        try
        {
            if (num2 == 0)
                throw num2;
            div = num1 / num2;
            cout << "The division of two numbers is : " << div;
        }
        catch (float res)
        {
            cout << num1 << "/" << num2 << endl;
            cout << "Division by zero";
        }
    }
};

int main()
{
    Numbers obj;
    obj.read();
    obj.result();
    return 0;
}