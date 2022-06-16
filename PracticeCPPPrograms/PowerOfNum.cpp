// C++ program to find power of a number
#include<iostream>
using namespace std;
int main()
{
    // declare variable
    int base, exponent;
    int result = 1;

    // taking inputs
    cout << "Enter the base and exponent :" << endl;
    cin >> base >> exponent;

    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    // display power
    cout << "The power of " << base << " is = " << result;

    return 0;    
}