#include <iostream>
#include <vector>
using namespace std;

//* Merge Sort
// Time Complexity - O(n log n)
// Approach -
// 1. Divide the array into two halves`
// 2. Recursively call merge sort on each half
// 3. Merge the two sorted halves
// 4. Return the sorted array

void merge(int arr[], int si, int mid, int ei)
{
    vector<int> temp;
    int i = si, j = mid + 1;
    while (i <= mid && j <= ei)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }

    // vector -> original arr
    for (int i = si, x = 0; i <= ei; i++)
    {
        arr[i] = temp[x++];
    }
}

void mergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
        return;
    // Base case - If the subarray has one or zero elements, it is already sorted
    int mid = si + (ei - si) / 2;
    mergeSort(arr, si, mid);     // left half
    mergeSort(arr, mid + 1, ei); // right half

    merge(arr, si, mid, ei); // merge the two halves
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n - 1);
    printArr(arr, n);
    return 0;
}