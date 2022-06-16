// Program to calculate the sum of first N natural numbers
#include <iostream>
using namespace std;
int findSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n, result;
    cout << "Enter a number:";
    cin >> n;
    result = findSum(n);
    cout << "The sum of first " << n << " natural number is: " << result;
    return 0;
}
