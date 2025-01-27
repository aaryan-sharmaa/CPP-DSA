#include <iostream>
#include <string>
#include <vector>
using namespace std;

void permutations(string str, string ans)
{
    int n = str.size();
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < str.size(); i++)
    {
        // string rem = str.substr(0, i) + str.substr(i + 1);
        // permutations(rem, ans + str[i]);

        char ch = str[i];
        string nextStr = str.substr(0, i) + str.substr(i + 1, n - i - 1);
        permutations(nextStr, ans + ch);
    }
}

int main()
{
    string str = "abc";
    string ans = "";

    permutations(str, ans);
    return 0;
}

//* Letter case permutation
//* https://leetcode.com/problems/letter-case-permutation/

// class Solution {
// public:
//     vector<string> letterCasePermutation(string s) {
//         vector<string> result;
//         generatePermutations(s, 0, result);
//         return result;
//     }

//     void generatePermutations(string& str, int index, vector<string>& result) {
//         if (index == str.size()) {
//             result.push_back(str);
//             return;
//         }

//         generatePermutations(str, index + 1, result);

//         if (isalpha(str[index])) {
//             str[index] =
//                 islower(str[index]) ? toupper(str[index]) : tolower(str[index]);
//             generatePermutations(str, index + 1, result);
//             str[index] =
//                 islower(str[index]) ? toupper(str[index]) : tolower(str[index]);
//         }
//     }
// };