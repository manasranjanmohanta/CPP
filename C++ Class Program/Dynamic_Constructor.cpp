#include <iostream>
using namespace std;

class Dynamic
{
    int *p;

public:
    Dynamic()
    {
        p = new int[5];
    }
    void get();
    void show();
};
void Dynamic ::get()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number : ";
        cin >> p[i];
    }
}
void Dynamic ::show()
{
    cout << "The array is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
}
int main()
{
    Dynamic n1;
    n1.get();
    n1.show();

    return 0;
}