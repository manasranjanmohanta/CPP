#include <iostream>
using namespace std;
class Array
{
private:
    int arr[20];

public:
    void read();
    void display();
};
void Array ::read()
{
    cout << "Enter 5 elements into array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
}
void Array::display()
{
    cout << "The elements are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    Array a;
    a.read();
    a.display();
    return 0;
}