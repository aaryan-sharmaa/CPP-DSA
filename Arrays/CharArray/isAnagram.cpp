//* Valid Anagram
//* https://leetcode.com/problems/valid-anagram/
//? Time Complexity: O(n)

#include <iostream>
using namespace std;

bool isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        cout << "not valid anagram!";
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (count[ s2[i] - 'a'] == 0)
        {
            cout << "not valid anagram!";
            return false;
        }
        count[s2[i] - 'a']--;
    }
    cout << "valid anagram!";
    return true;
}

int main()
{
    string s1 = "cat";
    string s2 = "dog";
    bool ans = isAnagram(s1, s2);
    cout << ans;

    return 0;
}