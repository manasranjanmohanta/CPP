/* Write a C++ program using dynamic binding method. */
#include <iostream>
using namespace std;

class One
{
private:
    int a;

public:
    virtual void read()
    {
        cout << "Enter a numbers in base object : ";
        cin >> a;
    }

    virtual void show()
    {
        cout << "Base object is : " << a << endl;
    }
};
class Two : public One
{
private:
    int a;

public:
    void read()
    {
        cout << "Enter a numbers in child object : ";
        cin >> a;
    }
    void show()
    {
        cout << "Child object is : " << a << endl;
    }
};

int main()
{
    One *obj, obj1;
    Two obj2;

    obj = &obj1;
    obj->read();
    obj->show();

    obj = &obj2;
    obj->read();
    obj->show();


    return 0;
}
