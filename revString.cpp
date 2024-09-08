// date : 27-12-2023
#include <iostream>
#include <string>
using namespace std;
string rev(string str, int i, int j)
{
    if (i > j)
    {
        return str;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    return rev(str, i, j);
}
int main()
{
    string str;
    cout << "Enter A STRING " << endl;
    getline(cin, str);
    cout << "Lenght of string is : " << str.length() << endl;
    string revstr = rev(str, 0, str.length() - 1);
    cout << "The Reversed String is : " << revstr << endl;
}