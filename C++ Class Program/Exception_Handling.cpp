// Divison of two numbers
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    try {
        cout << "Enter first numbers :";
        cin >> a;
        cout << "Enter second numbers :";
        cin >> b;
        if (b == 0)
            throw b;
        float result = a / b;
        cout << "Division of two numbers is : " << result << endl;
    }
    catch (float b) {
        cout << a << "/" << b << endl;
        cout << "Division by zero" << endl;
    }
    return 0;
}