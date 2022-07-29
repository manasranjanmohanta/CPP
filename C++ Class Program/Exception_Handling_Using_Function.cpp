#include <iostream>
using namespace std;
int div (float a, float b) {
    if (b == 0)
        throw b;
    int res = a / b;
    return res;
}
int main()
{
    float a, b;
    try {
        cout << "Enter first number : ";
        cin >> a;
        cout  << "Enter second number : ";
        cin >> b;
        int result = div(a, b);
        cout << "Division of two numbers is : " << result << endl;
    }
    catch (float b) {
        cout << a << "/" << b << endl;
        cout << "Division by zero" << endl;
    }
    return 0;
}