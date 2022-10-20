#include <iostream>
using namespace std;
class Dynamic
{
private:
    int *p;
    int n;

public:
    Dynamic(int size)
    {
        n = size;
        p = new int[size];
    }
    void read();
    void show();
};
void Dynamic::read()
{
    cout << "Enter elements into arrays \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements : ";
        cin >> p[i];
    }
}
void Dynamic::show()
{
    cout << "The elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    Dynamic A(n);
    A.read();
    A.show();
    return 0;
}