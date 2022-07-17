#include <iostream>
using namespace std;

class SumOfTwoNum
{
    int a, b;

public:
    void read()
    {
        cout << "Enter two numbers : " << endl;
        cin >> a >> b;
    }
    void disply()
    {
        cout << "The sum of two numbers is : " << a + b << endl;
    }
};
 int main()
{
    SumOfTwoNum s;
    s.read();
    s.disply();

    return 0;
}