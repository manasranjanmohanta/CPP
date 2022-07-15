#include <string.h>
#include <iostream>
using namespace std;
class Employee
{
private:
    char name[20], designation[20];
    int id;
    float salary;

public:
    void assign();
    void display();
};

void Employee::assign()
{
    cin >> name >> designation >> id >> salary;
}

void Employee::display()
{
    cout << name << designation << id << salary;
}
int main()
{
    Employee e[5];
    cout << "Enter employees details you want too store:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Employee->" << i+1 << endl;
        e[i].assign();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Employee->" << i+1 << endl ;
        e[i].display();
    }
    return 0;
}