// Write a C++ program to read student name, roll number, and marks in 6 subjects. Then 
// display the output in the given format:
// Name = 
// Roll =
// Subject-1 =
// Subject-2 =
// Subject-3 =
// Subject-4 =
// Subject-5 =
// Subject-6 =
// Total Mark =
// Average Mark =
#include <iostream>
using namespace std;

class Student
{
    char student_name[30];
    int roll_number;
    float marks[6];
    float total = 0, average = 0;

public:
    void read();
    void calculate();
    void display();
};

void Student ::read()
{
    cout << "Enter student name : ";
    cin.getline(student_name, 30);

    cout << "Enter student roll number : ";
    cin >> roll_number;

    cout << "Enter student mark in different subjects " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter marks in subject-" << i + 1 << " : ";
        cin >> marks[i];
    }
}
void Student ::calculate()
{
    for (int i = 0; i < 6; i++)
    {
        total = total + marks[i];
    }
    average = total / 6;
}

void Student ::display()
{
    cout << "Name = " << student_name << endl;
    cout << "Roll = " << roll_number << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Subject-" << (i + 1) << " = ";
        cout << marks[i] << endl;
    }
    cout << "Total mark = " << total << endl;
    cout << "Average mark = " << average << endl;
}
int main()
{
    Student s;
    s.read();
    s.calculate();
    s.display();

    return 0;
}