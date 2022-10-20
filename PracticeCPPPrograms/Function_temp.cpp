#include <iostream>
using namespace std;
template <class T>
void read(T *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
}
template <class T>
void show(T *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
}
template <class T>
void sort(T *p, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i] < p[j])
            {
                T temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    
}
int main()
{
    int *p, n;
    cout << "How many number you want to enter : ";
    cin >> n;
    p = new int[n];
    read(p, n);
    sort(p, n);
    show(p, n);
    return 0;
}
