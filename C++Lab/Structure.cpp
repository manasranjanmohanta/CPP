#include <iostream>
#include <string.h>
using namespace std;
struct Student
{
    char name[20];
    int rollNo;
    char branch[20];
    float marks;

    void assign(char *n, int r, char *b, float m)
    {
        strcpy(name, n);
        rollNo = r;
        strcpy(branch, b);
        marks = m;
    }

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Branch : " << branch << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main()
{
    Student s;
    s.assign("Manas", 404027, "MCA", 55);
    s.show();

    return 0;
}