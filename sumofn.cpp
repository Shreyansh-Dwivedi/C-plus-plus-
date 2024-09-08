// Date :25-07-2023
// Print the Sum on n Natural Numbers.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the Limit :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}