//* Max Subarray Sum - Kadane's Algorithm (DP)
//* Time Complexity: O(n)

//* Kadane's algorithm is :
//* 1. Initialize a variable max_so_far as maximum subarray sum
//* 2. Initialize a variable max_ending_here as maximum subarray sum ending at current position
//* 3. Traverse through the array
//* 4. Compare max_ending_here + arr[i] (current element) with 0
//* 5. If max_ending_here + arr[i] (current element) is greater than
//* 0, then update max_ending_here as max_ending_here + arr[i] (current element
//* 6. If max_ending_here + arr[i] (current element) is less than
//* 0, then update max_ending_here as 0
//* 7. Compare max_so_far with max_ending_here
//* 8. If max_so_far is less than max_ending_here, then update max_so

#include <iostream>
using namespace std;

void maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (maxSum < 0)
        {
            sum = 0;
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
    return 0;
}
