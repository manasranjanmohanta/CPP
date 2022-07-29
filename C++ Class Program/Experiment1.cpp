#include <iostream>
using namespace std;

class StringPallen
{
    char str[30];

public:
    void read()
    {
        cout << Enter a line of text:" << endl;
        cin >> str;
    }
    void verify()
    {
        cout << "hello world";
        cout << str;
    }
};
int main()
{
    StringPallen sp;
    sp.read();
    sp.verify();
}