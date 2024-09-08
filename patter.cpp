// date: 03/11/2023
// Q. print the Pattern :                       *
//                                            * *
//
//
//
#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0, k = 0, z = 3;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = z; j >= 1; j--)
        {
            cout << " ";
        }
        z--;
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}