// Write a C++ program to add and subtract two times

#include <iostream>
using namespace std;

class Time
{
private:
    int hh, mm, ss;

public:
    void read();
    void print();
    Time add(Time B);
    Time sub(Time B);
};

void Time ::read()
{
    cout << "Enter hour, minute, and seconds : " << endl;
    cin >> hh >> mm >> ss;
}

void Time ::print()
{
    cout << "hh: mm: ss" << endl;
    cout << hh << ":" << mm << ":" << ss << endl;
}

Time Time ::add(Time B)
{
    Time temp;
    temp.ss = ss + B.ss;
    temp.mm = mm + B.mm + (temp.ss / 60);
    temp.hh = hh + B.hh + (temp.mm / 60);
    temp.ss = temp.ss % 60;
    temp.mm = temp.mm % 60;
    return temp;
}

Time Time ::sub(Time B)
{
    Time temp;

    if (ss < B.ss)
    {
        --mm;
        ss = ss + 60;
        temp.ss = ss - B.ss;
    }
    else
    {
        temp.ss = ss - B.ss;
    }

    if (mm < B.mm)
    {
        --hh;
        mm = mm + 60;
        temp.mm = mm - B.mm;
    }
    else
    {
        temp.mm = mm - B.mm;
    }

    temp.hh = hh - B.hh;

    return temp;
}

int main()
{
    Time A, B, C, D;

    cout << "Read first time : " << endl;
    A.read();

    cout << "Read second time : " << endl;
    B.read();

    cout << "First Time : " << endl;
    A.print();
    cout << "Second Time : " << endl;
    B.print();

    C = A.add(B);
    D = A.sub(B);

    cout << "Addition of Two time : " << endl;
    C.print();
    cout << "Subtraction of two time : " << endl;
    D.print();

    return 0;
}