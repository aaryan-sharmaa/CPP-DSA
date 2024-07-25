//* Pair Sum - - Two Pointer Approach
//* https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//* Time Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
    int n = arr.size();
    int st = 0, end = n - 1;
    int currSum = 0;
    vector<int> ans;
    while (st < end)
    {
        currSum = arr[st] + arr[end];
        if (currSum == target)
        {
            ans.push_back(st + 1);
            ans.push_back(end + 1);
            return ans;
        }
        else if (currSum < target)
        {
            st++;
        }
        else
        {
            end--;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}
