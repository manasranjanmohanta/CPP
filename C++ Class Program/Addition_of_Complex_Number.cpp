// Addition of complex numbers 7 + i14 and -6 + i7.
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    void assign(int r, int i)
    {
        real = r;
        imag = i;
    }

    void show()
    {
        cout << real << " +"
             << " i" << imag << endl;
    }
    void addition(Complex A, Complex B)
    {
        real = A.real + B.real;
        imag = A.imag + B.imag;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.assign(7, 14);
    c2.assign(-6, 7);
    c3.addition(c1, c2);
    c1.show();
    c2.show();
    c3.show();

    return 0;
}