// Sum of array of integers and array of
// floating numbers.

#include <iostream>
using namespace std;
// template<class T>
template <class T>
T sum(T *a, int n)
{
    T sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
template <class T>
void show(T *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[] = {1, 2, 3, 4};
    float b[] = {23.2, 12.2, 45.3, 56.34, 67.34};

    int res1 = sum(a, 4);
    float res2 = sum(b, 5);

    cout << "Integer arrays is : ";
    show(a, 4);
    cout << "Sum = " << res1 << endl;

    cout << "Floating array is : ";
    show(b, 5);
    cout << "Sum = " << res2 << endl;

    return 0;
}
