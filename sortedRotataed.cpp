// Date :03-08-2023
// Q. Check whether the Inputed number is Present in the Given Sorted Rotataed Array or not.
// issime agr sirf findSortedArray wala function use karenge tb hum log pivot of a given Sorted Rotataed array nikal lenge.
// Galti se maine Pivot find karne wale function mein hi fiND wala funtion bhi add kardiya aur ek naya Program hi bna dala.
#include <iostream>
using namespace std;

int findSortedRotated(int arr[], int n, int x)
{
    int f = 0, ff = 0;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int fiND(int arr[], int n, int key, int ss)
{
    int f = 0, ff = 0;
    int s = ss;
    int e = n - 1;
    if (arr[ss] <= key <= arr[n - 1])
    {
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (arr[mid] == key)
            {
                cout << "Present " << mid;
                ff++;
            }
            if (key > arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
    }
    else
    {
        int mid = s + (e - s) / 2;
        int s = 0, e = ss - 1;
        while (s <= e)
        {
            if (arr[mid] == key)
            {
                cout << "Present " << mid;
                f++;
            }
            if (key > arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
    }
    if (f == 0 && ff == 0)
    {
        cout << "not present";
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int key = 10;
    int ss = findSortedRotated(arr, 5, 2);
    fiND(arr, 5, key, ss);
    return 0;
}