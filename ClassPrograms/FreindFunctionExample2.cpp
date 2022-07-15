#include <iostream>
using namespace std;
class PTR
{
private:
    float p, t, r, si = 0;

public:
    void get()
    {
        cout << "Enter principle rate:";
        cin >> p;
        cout << "Enter time:";
        cin >> t;
        cout << "Enter rate of interest:";
        cin >> r;
    }
    void show()
    {
        cout << "Simple Interest =" << si;
    }
    friend float res(PTR o1)
    {

        o1.si = (o1.p * o1.t * o1.r) / 100;
        return o1.si;
    }
};

int main()
{
    PTR p1, p2;
    p1.get();
    float si = 0;
    si = res(p1);
    cout << "Simple Interest:" si;
    return 0;
}
