#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Size of Array : " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Value at Index " << i << " : " << endl;
        cin >> arr[i];
    }
    int target;
    cout << "Enter Target : " << endl;
    cin >> target;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << "Elements of Index " << i << " and " << j << " sum up to " << target << endl;
            }
        }
    }
}