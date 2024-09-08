// Date :28-07-2023
//  Take input of Integer Values fron user and then Print the Maximum Value and the Minimum Values.
#include <iostream>
#include <string>
#include <cmath>
#include <limits.h> //THIS HEADER FILE IS VERY VERY INMPORTANT <<<<<<<<<<<------------>>>>>>>>>>>>>>>>>>>>>>>
using namespace std;
int getMin(int arr[], int n)
{
    int min = INT_MAX; // date :30-07-2023   //Time Complexity of the Funtion is : 0(n)
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    int M = getMax(num, 10);
    int m = getMin(num, 10);
    cout << "The Biggest Element is :" << M << endl;
    cout << "The Smallest Element is :" << m << endl;
    return 0;
}