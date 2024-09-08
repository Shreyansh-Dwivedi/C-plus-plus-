// Date :25-07-2023
// Check whether the inputed number is a Prime number or not.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, i, count = 0;
    cout << "Enter the Number to be Checked :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        cout << "It is a Prime Number" << endl;
    else
        cout << "The entered Number is Not a Prime Number" << endl;
    return 0;
}