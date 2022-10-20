#include <iostream>
using namespace std;
class Complex
{
private:
    float real, imag;

public:
    void read()
    {
        cout << "Enter real and imaginary value : ";
        cin >> real >> imag;
    }
    void show()
    {
        cout << real << " + "
             << "i" << imag << endl;
    }
    friend Complex operator+(Complex A, Complex B)
    {
        Complex temp;
        temp.real = A.real + B.real;
        temp.imag = A.imag + B.imag;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    cout << "Enter first complex number : \n";
    c1.read();
    cout << "Enter second complex number : \n";
    c2.read();
    c3 = c1 + c2;
    cout << "First complex number : ";
    c1.show();
    cout << "Second complex number : ";
    c2.show();
    cout << "Addition of two complex number : ";
    c3.show();
    return 0;
}