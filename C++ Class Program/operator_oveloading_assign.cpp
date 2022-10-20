// Write a program which assigns a matrix to another.(Using operator (=)overloading)
#include <iostream>
using namespace std;
class Matrix
{
private:
    int mat[2][2];

public:
    void read()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << "Enter a number : ";
                cin >> mat[i][j];
            }
        }
    }
    void show()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    void operator=(Matrix A)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                mat[i][j] = A.mat[i][j];
            }
        }
    }
};
int main()
{
    Matrix obj1, obj2;
    obj1.read();
    obj2 = obj1;
    cout << "First matrix : " << endl;
    obj1.show();
    cout << "After assigning the first matrix : " << endl;
    obj2.show();
    return 0;
}
