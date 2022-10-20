#include<iostream>
using namespace std;
class STATIC
{
    private:
        int n;
        static int a;
    public:
        void read()
        {
            n = ++a;
        }
        void show()
        {
            cout << n << "Object created!"<< endl;
        }

};