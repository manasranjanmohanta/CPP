#include <iostream>
using namespace std;
class Dynamic
{
private:
    int *p;

public:
    Dynamic()
    {
        p = new int[5];
    }
    void read()
    {
        cout << "Enter elements into array \n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter elements : ";
            cin >> p[i];
        }
    }
    void show()
    {
        cout << "The elements are : ";
        for (int i = 0; i < 5; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Dynamic A;
    A.read();
    A.show();
    return 0;
}