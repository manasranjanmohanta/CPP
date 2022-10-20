/*  Write a C++ program using Multipath Inheritance.*/
#include <iostream>
using namespace std;

class Student
{
protected:
    char name[20];
    char branch[20];
    int roll;

public:
    void get()
    {
        cout << "Enter name, branch, and roll : " << endl;
        cin >> name >> branch >> roll;
    }
};
class Internal : public virtual Student
{
protected:
    float imark;

public:
    void get()
    {
        cout << "Enter internal mark : " << endl;
        cin >> imark;
    }
};
class External : public virtual Student
{
protected:
    float emark;

public:
    void get()
    {
        cout << "Enter external mark : " << endl;
        cin >> emark;
    }
};
class Result : public Internal, External
{
    int total;

public:
    void get()
    {
        Student::
            get();
        Internal::
            get();
        External::
            get();
    }
    void display()
    {
        total = imark + emark;
        cout << "Name : " << name << endl;
        cout << "Branch : " << branch << endl;
        cout << "Total Marks : " << total << endl;
    }
};
int main()
{
    Result obj;
    obj.get();
    obj.display();
    return 0;
}
