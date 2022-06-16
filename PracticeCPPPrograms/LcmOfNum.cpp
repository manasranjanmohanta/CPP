// C++ program to find LCD of two numbers
#include <iostream>
using namespace std;
int main()
{
    // declare variable
    int num1, num2;
    int lcm, greatest;

    // taking inputs
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    // condition to check which is the lowest
    if (num1 > num2)
        greatest = num1;
    else
        greatest = num2;

    // find lcm
    while (greatest > 0)
    {
        if (greatest % num1 == 0 && greatest % num2 == 0)
        {
            lcm = greatest;
            break;
        }
        greatest++;
    }

    // display lcm
    cout << "LCM = " << lcm << endl;

    return 0;
}