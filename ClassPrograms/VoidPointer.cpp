#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 4.56;
    void *p, *q;

    p = &a;
    cout << *((int*) p) << endl;

    q = &b;
    cout << *((float*)q) << endl;
    
    return 0;
}