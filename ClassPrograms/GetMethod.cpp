#include <iostream>
using namespace std;
int main()
{
    char *name;
    name = new char[200];

    cout << "Enter a line of text : ";
    cin.getline(name, 200);

    cout << name;

    return 0;
}