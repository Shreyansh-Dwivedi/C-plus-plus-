// Date :29-07-2023
// Swap and Print the given Array.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void reverse(int arr[], int n)
{
    int z;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
        // z = arr[start];
        // arr[start] = arr[end];
        // arr[end] = z;
    }
}

void printARR(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {7, 8, 9, 11, 12};

    reverse(arr1, 6);
    reverse(arr2, 5);

    printARR(arr1, 6);
    printARR(arr2, 5);

    return 0;
}