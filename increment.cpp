#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int a = 10, b = 1;
    if (++a)
    {
        cout << b;
    }
    else
    {
        cout << ++b;
    }
    return 0;
}