// date :25-07-2023
// Q. Print n number of elements of Fibonacci Series .
// i've solved this by my own, without any help YOO BRO :-))
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0, t;
    cout << "Enter the Limit :";
    cin >> n;
    int n1 = 0, n2 = 1;
    if (n == 1)
    {
        cout << n1 << endl;
    }
    else if (n == 2)
    {
        cout << n1 << endl
             << n2 << endl;
    }
    else
    {
        cout << n1 << endl
             << n2 << endl;
        for (int i = 2; i < n; i++)
        {
            sum = n1 + n2;
            cout << sum << endl;
            t = n2;
            n1 = t;
            n2 = sum;
        }
    }
    return 0;
}