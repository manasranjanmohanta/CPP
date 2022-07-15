// Read a line of text. Find no. of vowels, alphabets, and spaces.
#include <iostream>
using namespace std;
class Lot
{
private:
    char arr[100];

public:
    void read();
    void sva();
};
void Lot::read()
{
    cout << "Enter a line of text:" << endl;
    cin.getline(arr, 100);
}
void Lot::sva()
{
    int v = 0, a = 0, s = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'u' || arr[i] == 'o')
            v++;
        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'U' || arr[i] == 'O')
            v++;
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
            a++;
        if (arr[i] == 32)
            s++;
    }
    cout << "Vowels = " << v << endl;
    cout << "Alphabets = " << a << endl;
    cout << "Spaces = " << s << endl;
}
int main()
{
    Lot lt;
    lt.read();
    lt.sva();
    return 0;
}