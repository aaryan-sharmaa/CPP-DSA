//* Valid Palindrome
//* https://leetcode.com/problems/valid-palindrome/

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(string str)
{
    // for (int i = 0; i < str.length(); i++)
    // {

    //     if (str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
    //     {

    //         str.erase(i, 1);
    //         i--;
    //     }
    //     else if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] = str[i] + 32;
    //     }
    //     cout << str << endl;
    // }

    // int i = 0, j = str.length() - 1;
    // while (i < j)
    // {
    //     if (str[i++] != str[j--])
    //     {
    //         cout << "not valid palindrome!" << endl;
    //         return false;
    //     }
    // }
    // cout << "valid palindrome!" << endl;
    // return true;

    

    string newStr;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalnum(str[i]))
        {
            newStr += tolower(str[i]);
        }
    }

    int i = 0, j = newStr.length() - 1;
    while (i < j)
    {
        if (newStr[i++] != newStr[j--])
        {
            return false;
            cout << "not valid!";
        }
    }
    cout << "valid palindrome!";
    return true;
}

int main()
{
    string str = "0P";
    isPalindrome(str);
    return 0;
}