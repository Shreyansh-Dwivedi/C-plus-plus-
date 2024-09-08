// Date :28-07-2023
// Calculate nCr value where value of n and r is inputed by the user.
// i've solved this by my own, without any help YOO BRO :-))
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int fact = 1;
        for (int i = n; i >= 1; i--)
        {
            fact *= i;
        }
        return fact;
    }
}
int main()
{
    int n, r;
    cout << "Enter the Value of n & r in nCr respectively :";
    cin >> n >> r;
    cout << "The nCr Value where n is " << n << " and where r is " << r << " :" << endl;
    cout << ((factorial(n)) / ((factorial(r)) * (factorial(n - r))));
    return 0;
}