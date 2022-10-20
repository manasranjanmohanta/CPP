#include <iostream>
using namespace std;
class Student
{
protected:
    char name[20];

public:
    void read()
    {
        cout << "Enter name : ";
        cin >> name;
    }
};
class Internal : public virtual Student
{
protected:
    float imark;

public:
    void read()
    {
        cout << "Enter internal mark : ";
        cin >> imark;
    }
};
class External : public virtual Student
{
protected:
    float emark;

public:
    void read()
    {
        cout << "Enter external mark : ";
        cin >> emark;
    }
};
class Result : public Internal, public External
{
private:
    float tot;

public:
    void read()
    {
        Student::read();
        Internal::read();
        External::read();
    }
    void display()
    {
        tot = (imark + emark);
        cout << "Name = " << name << endl;
        cout << "Internal mark = " << imark << endl;
        cout << "External mark = " << emark << endl;
        cout << "Total mark = " << tot << endl;
    }
};
int main()
{
    Result r1;
    r1.read();
    r1.display();
    return 0;
}