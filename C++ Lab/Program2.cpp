// Write a C++ program to add and subtract two numbers.

#include <iostream>
using namespace std;

class Numbers
{
    float num1, num2;

public:
    void assign(int, int);
    float add();
    float sub();
};
void Numbers ::assign(int n1, int n2)
{
    num1 = n1;
    num2 = n2;
}
float Numbers ::add()
{
    float sum = num1 + num2;
    return sum;
}
float Numbers ::sub()
{
    float sub = num1 - num2;
    return sub;
}
int main()
{
    Numbers N;

    float n1, n2, sum, sub;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;

    N.assign(n1, n2);
    sum = N.add();
    sub = N.sub();

    cout << "Addition of two numbers is : " << sum << endl;
    cout << "Subtraction of two numbers is : " << sub << endl;

    return 0;
}