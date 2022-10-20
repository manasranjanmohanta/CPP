/* Write a C++ program to add, subtract, and product of two matrices of order 3X3 using
operator overloading. */

#include <iostream>
using namespace std;

class Matrix
{
private:
    int mat[3][3];

public:
    void read()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void show()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix B)
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.mat[i][j] = mat[i][j] + B.mat[i][j];
            }
        }

        return temp;
    }

    Matrix operator-(Matrix B)
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {
                temp.mat[i][j] = 0;
                temp.mat[i][j] = mat[i][j] - B.mat[i][j];
            }
        }

        return temp;
    }

    Matrix operator*(Matrix B)
    {
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.mat[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    temp.mat[i][j] = mat[i][k] * B.mat[k][j];
                }
            }
        }

        return temp;
    }
};

int main()
{
    Matrix A, B, sum, sub, mul;

    cout << "Enter the element into first matrix : " << endl;
    A.read();
    cout << "Enter the element into second matrix : " << endl;
    B.read();

    sum = A.operator+(B);
    sub = A.operator-(B);
    mul = A.operator*(B);

    cout << "The first matrix is : " << endl;
    A.show();
    cout << "The second matrix is : " << endl;
    B.show();
    cout << "Addition of two matrix : " << endl;
    sum.show();
    cout << "Subtraction of two matrix : " << endl;
    sub.show();
    cout << "Multication of two matrix : " << endl;
    mul.show();

    return 0;
}