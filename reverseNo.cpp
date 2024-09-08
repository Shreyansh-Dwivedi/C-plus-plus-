// Date :26-07-2023
// Reverse the Number Inouted by the User.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, a, rev = 0, b, Nrev;
    cout << "Enter the Number to be Reversed :";
    cin >> n;
    if (n < pow(-2, 31) && n > (pow(2, 31) - 1))
    {
        cout << 0 << endl;
    }
    else
    {
        if (n < 0)
        {
            n = n * (-1);

            do
            {
                a = n % 10;
                b = n / 10;
                rev = rev + a;
                rev = rev * 10;
                n = b;
            } while (b > 0);
            Nrev = rev / 10;
            cout << Nrev * (-1) << endl;
        }
        else if (n > 0)
        {
            do
            {
                a = n % 10;
                b = n / 10;
                rev = rev + a;
                rev = rev * 10;
                n = b;
            } while (b > 0);
            int Nrev = rev / 10;
            cout << Nrev << endl;
        }
    }
    return 0;
}