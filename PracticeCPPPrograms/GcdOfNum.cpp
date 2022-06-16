// C++ program to find the GCD of two numbers
#include <iostream>
using namespace std;
int main()
{
    // declare variable
    int num1, num2;
    int gcd, lowest;

    // taking inputs
    cout << "Enter two numbers :" << endl;
    cin >> num1 >> num2;

    // condition to check which number is the lowest
    if (num1 > num2)
        lowest = num2;
    else
        lowest = num1;

    // findi gcd
    while (lowest > 0)
    {
        if (num1 % lowest == 0 && num2 % lowest == 0)
        {
            gcd = lowest;
            break;
        }
        lowest--;
    }

    // display gcd
    cout << "GCD = " << gcd << endl;

    return 0;
}