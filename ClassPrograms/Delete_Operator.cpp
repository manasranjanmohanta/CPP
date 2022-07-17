#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    int *q = new int[5];

    *p = 69;
    *(q + 0) = 23;
    *(q + 1) = 65;
    *(q + 2) = 55;
    *(q + 3) = 45;
    *(q + 4) = 35;

    cout << &p << endl;
    cout << *p << endl;
    for (int i = 0; i < 5; i++)
    {
    cout << *(q + i) << endl;
    }

    delete p, q;

    cout << *p;
    

    return 0;
}