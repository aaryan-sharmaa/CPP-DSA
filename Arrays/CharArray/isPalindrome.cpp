//* Valid Palindrome
//* https://leetcode.com/problems/valid-palindrome/

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (str[i++] != str[j--])
        {
            cout << "not valid palindrome!" << endl;
            return false;
        }   
    }
    cout << "valid palindrome!" << endl;
            return true;
}


int main()
{
    char word[] = "racer";
    isPalindrome(word, strlen(word));
    return 0;
}