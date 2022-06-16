// C++ program to find Grade of Student

#include <iostream>
using namespace std;
int main()
{
    // declare variable
    int marks;
    char grade;

    // taking inputs
    cout << "Enter your marks betweeen 0 to 100 : ";
    cin >> marks;

    // condition to check marks is higher or lower the range
    if (marks < 0 || marks > 100)
    {
        cout << "Invalid Marks.";
    }

    // find grade using switch
    switch (marks / 10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    case 5:
        grade = 'E';
        break;
    case 4:
        grade = 'F';
        break;
    default:
        cout << "Your ar Fail." ;
        break;
    }

    // display grade
    cout << "Your Grade is: " << grade;
    return 0;
}