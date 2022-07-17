#include <iostream>
using namespace std;

class SingleDimPointer
{
private:
    int *arr;

public:
    void assign(int *);
    void display();
};
void SingleDimPointer ::assign(int *b)
{
    arr = new int[7];
    for (int i = 0; i < 7; i++)
    {
        *(arr + i) = *(b + i);
    }
}
void SingleDimPointer ::display()
{
    for (int i = 0; i < 7; i++)
    {
        cout << *(arr + i) << " ";
    }
}
int main()
{
    int p[7] = {1, 2, 3, 4, 5, 6, 7};
    SingleDimPointer s;
    s.assign(p);
    s.display();
    return 0;
}