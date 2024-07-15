//* Max Subarray Sum - Optimized Brute Force Approach
//* Time Complexity: O(n^2)

#include <iostream>
using namespace std;

void maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) // start = 2
    {
        int sum = 0;
        for (int j = i; j < n; j++) // end = 2,3,4,5
        {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
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