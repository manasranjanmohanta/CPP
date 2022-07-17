#include <iostream>
using namespace std;

class SingleDimArray
{
    int arr[7];

public:
    void assign(int a[]);
    void display();
};
// void SingleDimArray :: assign(int a[]) {
//     for (int i = 0; i < 7; i++)
//     {
//        arr[i] = a[i];
//     }

// }
void SingleDimArray ::assign(int *b)
{
    for (int i = 0; i < 7; i++)
    {
        *(arr + i) = *(b + i);
    }
}

// void SingleDimArray :: display() {
//     for (int i = 0; i < 7; i++)
//     {
//         cout << arr[i];
//     }

// }
void SingleDimArray ::display()
{

    for (int i = 0; i < 7; i++)
    {
        cout << *(arr + i) << " ";
    }
}
int main()
{
    SingleDimArray s;
    int b[7] = {1, 2, 3, 4, 5, 6, 7};
    s.assign(b);
    s.display();

    return 0;
}