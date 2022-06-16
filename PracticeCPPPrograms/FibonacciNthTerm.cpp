// C++ program to find the Nth Fibonacci term
#include <iostream>
using namespace std;
int main()
{
    // declare variable
    int term;
    int fib1 = 0, fib2 = 1, fib;

    // taking inputs
    cout << "Enter the term which value you want to know : ";
    cin >> term;

    if (term == 1)
    {
        cout << "The " << term << "term is = " << fib1;
        return 0;
    }
    if (term == 2)
    {
        cout << "The " << term << "term is = " << fib2;
        return 0;
    }

    // to find Nth term using for loop
    for (int i = 3; i <= term; i++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    // display the Nth fibonacci term
    cout << "The " << term << "th term is = " << fib;

    return 0;
}