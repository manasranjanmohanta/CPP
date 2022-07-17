#include <iostream>
using namespace std;

class one
{
private:
    int a;

public:
    virtual void accept()
    {
        cout << "Enter a number in base object : ";
        cin >> a;
    }
    virtual void display()
    {
        cout << "Base object : " << a << endl;
    }
};
class two : public one
{
private:
    int a;

public:
    void accept()
    {
        cout << "Enter a number in derived object : ";
        cin >> a;
    }
    void display()
    {
        cout << "Derived object : " << a << endl;
    }
};

int main()
{
    one *p, obj1, obj2;
    two obj3;
    cout << sizeof(obj1) << endl;
    cout << sizeof(obj3);

    p = &obj1;
    p->accept();
    p->display();
    p = &obj2;
    p->accept();
    p->display();
    p = &obj3;
    p->accept();
    p->display();
    return 0;
}