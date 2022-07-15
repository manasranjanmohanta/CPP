// Find smallest and biggest of "n" numbers using friend function.(Two friend functions)
#include <iostream>
using namespace std;
class MaxMin
{
private:
    int *p;
    int n;

public:
    void get();
    void show();
    friend int max(MaxMin);
    friend int min(MaxMin);
};
void MaxMin::get()
{
    cout << "Enter the size of the array:";
    cin >> n;
    p = new int[n];
    cout << "Enter the elements into the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> *(p + i);
    }
}
void MaxMin::show()
{
    cout << "The elments are:";
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << endl;
    }
}
int max(MaxMin o1)
{
    int a = o1.p[0];
    for (int i = 0; i < o1.n; i++)
    {
        if (o1.p[i] > a)
        {
            a = o1.p[i];
        }
    }
    return a;
}
int min(MaxMin o1)
{
    int a = o1.p[0];
    for (int i = 0; i < o1.n; i++)
    {
        if (o1.p[i] < a)
        {
            a = o1.p[i];
        }
    }
    return a;
}
int main()
{
    MaxMin m1;
    m1.get();
    m1.show();
    int maximum = max(m1);
    int minimum = min(m1);
    cout << "Maximum is:" << maximum;
    cout << "Minimum is:" << minimum;
    return 0;
}