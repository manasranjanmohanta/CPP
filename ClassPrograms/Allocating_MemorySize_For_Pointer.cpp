#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;

    cout << &a << endl;
    cout << p << endl;

    p = new int;

    cout << a << endl;
    cout << p << endl;

    return 0;
}