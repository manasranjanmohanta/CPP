// Assign {7, 1, 4, 3, 10, 66, 67} in an array and display it using class
// and object.
#include <iostream>
using namespace std;
class Array
{
private:
    int a[7];

public:
    void assign(int[]);
    void show();
};
void Array::assign(int b[])
{
    for (int i = 0; i < 7; i++)
    {
        a[i] = b[i];
    }
}
void Array::show()
{
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    Array a1;
    int b[] = {7, 1, 4, 3, 10, 66, 67};
    a1.assign(b);
    a1.show();
    return 0;
}