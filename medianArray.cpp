// date :03-09-2023
// Q. Two Arrays are Given the User have to find out there median.
// Hint : first merge the two arrays.
//        when we use merge inbuilt function it automatically sorts the array too.   ---COOL---
//        then take out their Median
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    int m = nums1.size();
    int n = nums2.size();
    cout << "Size of 1st Array : " << m << endl;
    cout << "Size of 2nd Array : " << n << endl;
    vector<int> nums3(nums1.size() + nums2.size());
    cout << "Size of 3rd Array : " << nums3.size() << endl;
    cout << "Capacity of 3rd Array : " << nums3.capacity() << endl;
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
    cout << "Size of 3rd Array : " << nums3.size() << endl;
    cout << "Capacity of 3rd Array : " << nums3.capacity() << endl;
    cout << "Elements in 3rd Array are : " << endl;
    for (int i = 0; i < nums3.size(); i++)
    {
        cout << nums3[i] << " ";
    }
    cout << endl;
    if ((nums3.size()) % 2 != 0)
    {
        cout << "Median is : " << nums3[nums3.size() / 2] << endl;
    }
    else if ((nums3.size()) % 2 == 0)
    {
        int kgb = nums3.size() / 2;
        cout << nums3[kgb] << endl;
        cout << nums3[kgb - 1] << endl;
        int k1 = nums3[kgb];
        int k2 = nums3[kgb - 1];
        int kFinal = k1 + k2;
        cout << "Ruf Work : " << kFinal << endl;
        cout << "Median is : " << kFinal / 2.0;
    }
}