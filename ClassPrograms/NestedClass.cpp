#include <string.h>
#include <iostream>
using namespace std;
class Student
{
private:
    char name[20], branch[20];
    int age;

public:
    void assign(char n[], char b[], int a)
    {
        strcpy(name, n);
        strcpy(branch, b);
        age = a;
    }
    void display()
    {
        cout << name << " " << branch << " "<< age << endl;
    }

    class Marks
    {
    private:
        int sub1, sub2, sub3;

    public:
        void assign(int a, int b, int c)
        {
            sub1 = a;
            sub2 = b;
            sub3 = c;
        }
        void display()
        {
            int total;
            total = sub1 + sub2 + sub3;
            cout << "Total=" << total;
        }
    } m;
};
int main()
{
    Student s;
    s.assign("Manas", "MCA", 404027);
    s.display();

    s.m.assign(90, 95, 98);
    s.m.display();

    return 0;
}