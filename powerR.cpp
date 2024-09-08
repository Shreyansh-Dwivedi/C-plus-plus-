// date : 27-12-2023
#include <iostream>
using namespace std;
int power(int i, int j)
{
    if (j == 0)
        return 1;
    else if (j == 1)
        return i;
    return i * power(i, --j);
}
int main()
{
    int i, j;
    cout << "Enter the Base Number and its Power : " << endl;
    cin >> i >> j;
    cout << "The calculated value is : " << power(i, j) << endl;
}