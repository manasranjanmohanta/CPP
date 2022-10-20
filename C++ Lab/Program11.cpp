/* Write a C++ program to find largest and smallest of ‘n’ numbers using function template */
#include <iostream>
using namespace std;

template <class T>

T largest(T *arr, T n)
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

template <class T>

T smallest(T *arr, T n)
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

int main()
{
    int *arr, n, large, small;
    cout << "How many numbers you want to enter : ";
    cin >> n;
    arr = new int[n];
    cout << "Enter numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    large = largest(arr, n);
    small = smallest(arr, n);

    cout << "The largest element is : " << large << endl;
    cout << "The smallest element is : " << small << endl;

    return 0;
}
