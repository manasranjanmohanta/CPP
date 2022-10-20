/* Write a C++ program to find largest and smallest of three numbers using class template. */
#include <iostream>
using namespace std;

template <class T>
class Vector
{
    T *arr;
    int n;

public:
    void read(int size)
    {
        n = size;
        arr = new T[n];
        cout << "Enter elements : " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void show()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    T largest()
    {
        T large = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (large < arr[i])
            {
                large = arr[i];
            }
        }
        return large;
    }
    T smallest()
    {
        T small = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (small > arr[i])
            {
                small = arr[i];
            }
        }
        return small;
    }
};
int main()
{
    Vector<int> vobj;
    int n, large, small;
    cout << "How many numbers you want to enter : ";
    cin >> n;

    vobj.read(n);

    cout << "The elements are : " << endl;
    vobj.show();

    large = vobj.largest();
    small = vobj.smallest();

    cout << "\nThe largest element is : " << large << endl;
    cout << "The smallest element is : " << small << endl;

    return 0;
}