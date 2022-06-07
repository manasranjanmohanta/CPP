/*Write a program to generate  atrinagle or an inverted triangle fill
 n terms based upon the user's choice the triangle to be displayed
input:type 1 for trianle andtype 2 for a inverted triangle
and then enter your choice and enter number of terms*/

#include <iostream>
using namespace std;
int main()
{
    int choice, n;

    cout << endl
         << "Type 1 for a triangle." << endl;
    cout << "Type 2 for a inverted triangle." << endl;

    cout << "Enter your choice:";
    cin >> choice;

    cout << endl
         << "Enter the number of terms:";
    cin >> n;

    if (choice == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= i && j <= n)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
    if (choice == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= 1 && j <= (n + 1) - i)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
    if (choice != 1 && choice != 2)
        cout << "You entered wrong choice";
    return 0;
}