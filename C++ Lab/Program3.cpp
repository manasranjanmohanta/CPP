/* Write a C++ program to read N employees name, gender, post, and salary in an array of
object called EMP. Then display all the details */

#include <iostream>
using namespace std;

class Employee
{
private:
    char name[20];
    char gender[20];
    char post[20];
    float salary;

public:
    void read();
    void display();
};

void Employee ::read()
{
    cout << "Enter employee name : ";
    cin.getline(name, 20);
    cout << "Enter gender : ";
    cin.getline(gender, 10);
    cout << "Enter post : ";
    cin.getline(post, 20);
    cout << "Enter salary : ";
    cin >> salary;
}

void Employee ::display()
{
    cout << "Name = " << name << endl;
    cout << "Gender = " << gender << endl;
    cout << "Post = " << post << endl;
    cout << "Salary = " << salary << endl;
}
int main()
{
    int n;
    cout << "Enter how many employees data yoou want to store : ";
    cin >> n;
    cin.get();
    
    Employee EMP[n];

    cout << "Enter employee details-" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Employee-" << i + 1 << endl;
        EMP[i].read();
        cout << endl;
        cin.get();
    }

    cout << "---Employee details---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Employee-" << i + 1 << endl;
        EMP[i].display();
        cout << endl;
    }

    return 0;
}
