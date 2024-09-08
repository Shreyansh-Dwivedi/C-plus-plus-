// date : 27-12-2023
#include <iostream>
#include <string>
using namespace std;
bool chkpalin(string str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    return chkpalin(str, ++i, --j);
}

int main()
{
    string str;
    cout << "Enter A STRING " << endl;
    getline(cin, str);
    cout << "Lenght of string is : " << str.length() << endl;
    bool chk = chkpalin(str, 0, str.length() - 1);
    if (chk)
        cout << "Entered string is a PALINDROME. " << endl;
    else
        cout << "NOT PALINDROME" << endl;
}