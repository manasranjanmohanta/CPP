#include <iostream>
using namespace std;
class Pointer
{
private:
    int *p;

public:
    void assign(int[]);
    void show();
};
void Pointer::assign(int b[7])
{
    p = new int[7];
    for (int i = 0; i < 7; i++)
    {
        // p[i] = b[i];
        *(p + i) = *(b + i);
    }
}
void Pointer::show()
{
    for (int i = 0; i < 7; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;
}
int main()
{
    Pointer p1;
    int b[] = {7, 1, 4, 3, 66, 67, 69};
    p1.assign(b);
    p1.show();
    return 0;
}