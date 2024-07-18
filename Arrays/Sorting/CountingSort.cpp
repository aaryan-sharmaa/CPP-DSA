//* Counting Sort
//* Time Complexity: O(n+k)
//? Idea : use a frequency count of elements from min to max

#include <iostream>
#include <climits>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int arr[], int n)
{
    int freq[100000];
    int minVal = INT_MAX, maxVal = INT_MIN;

    // 1st step - O(n)
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 2nd step - O(range) = max - min
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}

int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr, n);
    return 0;
}
