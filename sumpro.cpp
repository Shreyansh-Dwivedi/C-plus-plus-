// date :25-07-2023
// Q. Subtract the individual sum of digits of a Inputed number from the product of individual digits of the Inputed number.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0, pro = 1, a, b;
    cout << "Enter no. :";
    cin >> n;
    do
    {
        a = n / 10;
        b = n % 10;
        sum = sum + b;
        pro = pro * b;
        n = a;
    } while (a > 0);
    cout << pro - sum << endl;
    return 0;
}