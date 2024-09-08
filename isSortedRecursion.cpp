#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isSorted(int arr[], int size);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 9;
    bool ans = isSorted(arr, n);
    if (ans)
    {
        cout << "Array is Sorted. ";
    }
}
bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    else if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr + 1, size - 1);
    }
}
