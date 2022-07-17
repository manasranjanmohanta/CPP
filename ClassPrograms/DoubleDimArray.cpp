#include <iostream>
#include <iomanip>
using namespace std;

class DoubleDimArray
{
    int arr[2][3];

public:
    void assign(int b[][3]);
    void display();
};

void DoubleDimArray ::assign(int b[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = b[i][j];
        }
    }
}
void DoubleDimArray ::display()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(4) << arr[i][j] ;
        }
        cout << endl;
    }
}
int main()
{
    int mat[][3] = {{1, 4, 3}, {7, 66, 67}};
    DoubleDimArray d;
    d.assign(mat);
    d.display();

    return 0;
}