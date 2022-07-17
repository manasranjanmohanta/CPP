#include <iostream>
using namespace std;

class SumOfTwoNum
{
    int a, b;

public:
    void read();
    void display();
};

inline void SumOfTwoNum ::read()
{
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
}
inline void SumOfTwoNum ::display()
{
    cout << "The sum of two numbers is : " << a + b << endl;
}
int main()
{
    SumOfTwoNum s;
    s.read();
    s.display();

    return 0;
}