#include <iostream>
using namespace std;
class Pointer
{
private:
    int *p;

public:
    void assign(int *, int);
    void show(int);
};
void Pointer::assign(int *a, int n)
{
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(p + i) = *(a + i);
    }
}
void Pointer::show(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << endl;
    }
}
int main()
{
    Pointer p;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arrSize = sizeof(arr);
    int intSize = sizeof(arr[0]);
    int n = arrSize / intSize;
    p.assign(arr, n);
    p.show(n);

    return 0;
}