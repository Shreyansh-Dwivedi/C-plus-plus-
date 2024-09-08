// Date :24-08-2023   -------------------- after 4-5 hrs matha pacchi k baad solve hogya, kar to hum issko aur pehle hi karlete but beech me movie dekhne lge the :-))))
// string : My name is Shreyansh
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter The String :" << endl;
    // str = "My name is Shreyansh\0";
    //  cin >> str;
    getline(cin, str);
    cout << str << endl;
    cout << "\nThe Length of the entered string " << str.length() << endl;
    int s = 0, e = str.length() - 1;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            e = i - 1;
            while (s < e)
            {
                swap(str[s++], str[e--]);
            }
            e = i - 1;
            // for (int j = s; j < e; j++)
            // {
            //   swap(str[s++], str[e]);
            // }
            s = e + 2;
        }
    }
    cout << "Reverse is : " << str << endl;

    return 0;
}