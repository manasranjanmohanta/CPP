#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int &n = num;

    cout << num << endl;
    cout << &n << endl;
    cout << n << endl;
    cout << &(n) << endl;

    return 0;
}