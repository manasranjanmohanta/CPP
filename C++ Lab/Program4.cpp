/* Write a C++ program to add and subtract matrices a[2][3]={{1,2,3},{4,5,6}} and
    b[2][3]={{7,8,9},{2,1,7}} using friend function.  */

#include <iostream>
using namespace std;
class Matrix
{
    int mat[2][3];

public:
    void assign(int arr[][3])
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                mat[i][j] = arr[i][j];
            }
        }
    }
    void show()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }
    friend Matrix addition(Matrix, Matrix);
    friend Matrix subtraction(Matrix, Matrix);
};

Matrix addition(Matrix A, Matrix B)
{
    Matrix temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.mat[i][j] = A.mat[i][j] + B.mat[i][j];
        }
    }
    return temp;
}
Matrix subtraction(Matrix A, Matrix B)
{
    Matrix temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.mat[i][j] = A.mat[i][j] - B.mat[i][j];
        }
    }
    return temp;
}
int main()
{
    Matrix A, B, sum, sub;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{7, 8, 9}, {2, 1, 7}};

    A.assign(a);
    B.assign(b);

    cout << "The matrix-a is : " << endl;
    A.show();
    cout << "The matrix-b is : " << endl;
    B.show();

    sum = addition(A, B);
    sub = subtraction(A, B);

    cout << "Addition of two matrix is : " << endl;
    sum.show();
    cout << "Subtraction of two matrix is : " << endl;
    sub.show();

    return 0;
}