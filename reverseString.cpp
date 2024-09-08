#include <iostream>
// #include <array>
using namespace std;
int main()
{
    char name[20];
    cout << "Enter your Name: ";
    cin >> name;
    cout << name << endl;
    int s = 0, e = sizeof(name) / 4;
    cout << e << endl;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    cout << name << endl;
    return 0;
}