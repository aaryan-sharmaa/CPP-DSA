//* Max Subarray Sum - Brute Force Approach
//* Time Complexity: O(n^3)

#include <iostream>
using namespace std;

void maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            cout << sum << ",";
            maxSum = max(maxSum, sum);
        }
        cout << endl;
    }
    cout << "Maximum Subarray Sum = " << maxSum << endl;
}
int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum(arr, n);
    return 0;
}
