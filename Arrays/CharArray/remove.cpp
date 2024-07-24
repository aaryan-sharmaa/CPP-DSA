
#include <iostream>

using namespace std;

bool isPalindrome(char str[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (str[i++] != str[j--])
        {
            return false;
        }   
    }
            return true;
}


void removeSpecialCharacter(string s)
{
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
        {

            s.erase(i, 1);
            i--;
        }
    }
    cout << s;

}


int main()
{
    string s = "$Gee*k;s..fo, r'Ge^eks?";
    removeSpecialCharacter(s);
    return 0;
}