/* Assign {1, 3, 4, 7, 67} in an array. Change every element by incrementing by
2 using reference objects in a member function. */
#include <iostream>
using namespace std;
class Object
{
private:
    int a[5];

public:
    void assign(int[]);
    void result(Object &);
    void show();
};
void Object::assign(int b[])
{
    for (int i = 0; i < 5; i++)
    {
        a[i] = b[i];
    }
}
void Object::result(Object &obj)
{
    for (int i = 0; i < 5; i++)
    {
        obj.a[i] = a[i] + obj.a[i];
    }
}
void Object::show()
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    Object o1, o2;
    int a[] = {1, 3, 4, 7, 67};
    int b[] = {9, 8, 7, 6, 5};
    o1.assign(a);
    o2.assign(b);
    o1.show();
    o2.show();
    o1.result(o2);
    o1.show();
    o2.show();
    return 0;
}