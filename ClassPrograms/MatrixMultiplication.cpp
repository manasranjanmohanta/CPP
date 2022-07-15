#include <iostream>
using namespace std;
class Multiply
{
private:
    int a[20][20];

public:
    void get();
    void show();
    Multiply Multiply multi(Multiply);
};
 void Multiply::get()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Muliply::show()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j];
        }
    }
}
Multiply Multiply::multi(Multiply B)
{
    Multiply C;
    for (int i = 0; i < 3; i++)
    {
        C.a[i][j] = 0;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; i < 3; i++)
            {
                C.a[i][j] += A.a[i].[k] + B.a[k][j];
            }
        }
    }
    return C;
}
int main()
{
    Multiply A, B, C;
    A.get();
    A.show();
    B.get();
    B.show();
    C = A.multi(B);
    C.show();
    return 0;
}