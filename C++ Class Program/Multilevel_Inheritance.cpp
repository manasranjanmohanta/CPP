#include <iostream>
using namespace std;
class Person
{
protected:
    char pName[20];
    char pGender[10];
    int pAge;

public:
    void read()
    {
        cout << "Enter person name , gender and age : ";
        cin >> pName >> pGender >> pAge;
    }
};
class Student : public Person
{
protected:
    char sBranch[15];
    int sRoll;

public:
    void read()
    {
        Person::read();
        cout << "Enter student branch and roll no : ";
        cin >> sBranch >> sRoll;
    }
};
class Exam : public Student
{
protected:
    int iMark, eMark;

public:
    void read()
    {
        Student::read();
        cout << "Enter internal and external mark : ";
        cin >> iMark >> eMark;
    }
    void display()
    {
        cout << "Name = " << pName << endl;
        cout << "Gender = " << pGender << endl;
        cout << "Age = " << pAge << endl;
        cout << "Branch = " << sBranch << endl;
        cout << "Roll No = " << sRoll << endl;
        cout << "Total marks = " << (iMark + eMark) << endl;
    }
};
int main()
{
    Exam e1;
    e1.read();
    e1.display();
    return 0;
}