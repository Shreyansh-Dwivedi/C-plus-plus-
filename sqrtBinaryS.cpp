// Date :03-08-2023
#include <iostream>
using namespace std;
void sqRT(int h)
{
    int ans = 0;
    int k = 0;
    int s = 0;
    int e = h;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == h)
        {
            cout << "Square Root of " << h << " is " << mid << endl;
            k++;
        }
        if (mid * mid > h)
        {
            e = mid - 1;
        }
        else if (mid * mid < h)
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if (k == 0)
    {
        cout << ans;
    }
}
int main()
{
    int n;
    cout << "Enter the No. to calculate its SqRt. : ";
    cin >> n;
    sqRT(n);
    return 0;
}