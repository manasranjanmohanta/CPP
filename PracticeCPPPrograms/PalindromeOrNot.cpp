// C++ program to check whether a number is palindrome or not
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    // declare variable
    int num, palin = 0;
    int count = 0, digit, temp;

    // taking input
    cout << "Enter a number : ";
    cin >> num;

    temp = num;

    while (num != 0)
    {
        digit = num % 10;
        palin = (palin * 10) + digit;
        num = num / 10;
    }

    if (temp == palin)
        cout << "It is palindrome number.";
    else
        cout << "It is not a palindrome number.";

    return 0;
}