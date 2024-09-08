// Date :25-07-2023
// Print all the Prime Numbers till the entered Natural Number Limit.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, count;
    cout << "Enter The Limit :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
            cout << i << " is a Prime Number" << endl;
    }
    return 0;
}