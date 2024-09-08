// date : 18-02-2024

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {2, 3, 4};
//     vector<int> v2 = {5, 6, 1};
//     vector<int> v3(v1.size() + v2.size());
//     merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//     for (auto i : v3)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     cout << v3[3];

//     return 0;
// }

// //// ON LeetCode : 17-02-2024    97.96% better runtime 12ms
// class Solution
// {
// public:
//     double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
//     {
//         double Ans1 = 0;
//         int m = nums1.size();
//         int n = nums2.size();
//         vector<int> nums3(n + m);
//         merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
//         if ((m + n) % 2 != 0)
//         {
//             Ans1 = nums3[(m + n) / 2];
//             return Ans1;
//         }
//         else
//         {
//             Ans1 = (nums3[(m + n) / 2] + nums3[((m + n) / 2) - 1]) / 2.0;
//             return Ans1;
//         }
//         return 0.0;
//     }
// };

//-----------------------------------------------------------

//date : 19-02-2024

#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 3)
        {
            arr[i] = 9;
        }
        //  cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}