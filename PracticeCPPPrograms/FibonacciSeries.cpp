// C++ program to display Fibonacci series of a number
#include <iostream>
using namespace std;
int main()
{
    // declare variable
    int num;
    int fib1 = 0, fib2 = 1, fib;

    // taking inputs
    cout << "Enter how many terms you want to print : " << endl;
    cin >> num;

    cout << "The fibnacci series is = " << fib1 << " " << fib2;
    // for loop to print fibonacci series
    for (int i = 3; i <= num; i++)
    {
        fib = fib1 + fib2;
        cout << " " <<fib;
        fib1 = fib2;
        fib2 = fib;
    }

    return 0;
}