// date :09-08-2023
#include <iostream>
#include <array>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // array<int, 4> a = {1, 2, 3, 4};
    // int size = a.size();
    // cout << "The Size of the Array is :" << size << endl;
    // cout << "The Elment at the 3rd Index is :" << a.at(3) << endl;
    // cout << "PRINT :- 0 if array is NOT-Empty , If array is Empty PRINT :- 1  :" << endl
    //      << a.empty() << endl;
    // /*.empty says "Array is Empty"  , now if the array is not empty it returns 0 stating
    // that the array is not empty      */
    // cout << "First Element :" << a.front() << endl;
    // cout << "Second Elememt :" << a.back() << endl;
    // METHOD - I ----->
    // char arr[] = {'s', 'h','\0'};
    // cout << arr;
    // METHOD - II ----->
    // char arr[23];
    // cin >> arr;
    // cout << "KA Be Shreywa" << endl
    //   << arr << endl;
    // string s;
    // cin >> s;
    // cout << endl
    //      << "dddd" << endl
    //      << s;
    // int l = s.length();
    // cout << "Length is : " << l << endl;
    // cout << s.at(3);
    // char ch[10] = "HIGH G";
    // cout << ch << endl;
    // string s;
    // s.push_back('c');
    // cin >()
    //     getline(cin, s);
    //     cout << s << endl;
    //     int n = s.length();
    //     cout << n << endl;
    // s = "Hello Munna ";
    // if (s[4] == 'o')
    // {
    //     cout << "Yes" << endl;
    // }

    vector<int> v1 = {2, 3, 4};
    for (auto i : v1)
        cout << i << " ";
    cout << endl;
}
