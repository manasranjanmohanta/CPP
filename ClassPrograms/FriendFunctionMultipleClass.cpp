#include <iostream>
using namespace std;
class One
{
private:
    int num;

public:
    void get()
    {
        cout << "Enter first number:";
        cin >> num;
    }
    void show()
    {
        cout << "The first number is:";
        cin >> num;
    }
    friend int sum(One, Two, Three);
};
class Two
{
private:
    int num;

public:
    void get()
    {
        cout << "Enter second number:";
        cin >> num;
    }
    void show()
    {
        cout << "The second number is:";
        cin >> num;
    }
    friend int sum(One, Two, Three);
};
class Three
{
private:
    int num;

public:
    void get()
    {
        cout << "Enter third number:";
        cin >> num;
    }
    void show()
    {
        cout << "The  third number is:";
        cin >> num;
    }
    friend int sum(One, Two, Three);
};
int sum(One A, Two B, Three C)
{
    int sum = A.num + B.num + C.num;
    return sum;
}

int main()
{
    One A;
    Two B;
    Three C;
    A.get();
    B.get();
    C.get();
    int res = sum(A, B, C);
    A.show();
    B.show();
    C.show();
    cout << "The sum of three number is :" << res;
    return 0;
}