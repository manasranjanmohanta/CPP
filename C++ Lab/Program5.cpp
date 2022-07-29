#include <iostream>
using namespace std;

class Employee
{
    char name[20];

public:
    void readName()
    {
        cout << "Enter name : ";
        cin.getline(name, 20);
    }
    void showName()
    {
        cout << name;
    }
};
class Work : virtual public Employee
{
    float expYear;

public:
    void readExp()
    {
        cout << "Enter experience in years : ";
        cin >> expYear;
    }
    void showExp()
    {
        cout << "Experience = " << expYear << "years" << endl;
    }
};
class Account : virtual public Employee
{
    float salary;

public:
    void readSal()
    {
        cout << "Enter salary : ";
        cin >> salary;
    }
    void showSal()
    {
        cout << "Salary = " << salary << endl;
    }
};
class Person : public Work, public Account
{
    char gender[10];

public:
    void readGen()
    {
        cout << "Enter gender : ";
        cin.getline(gender, 10);
    }
    void showGen()
    {
        cout << "Gender = " << gender << endl;
    }
};
int main()
{
    Person p;
    p.readName();
    p.readExp();
    p.readSal();
    p.readGen();
    // p.Person::showName();
    // p.Person::showExp();
    // p.Person::showSal();
    p.showName();
    p.showExp();
    p.showSal();
    p.showGen();

    return 0;
}