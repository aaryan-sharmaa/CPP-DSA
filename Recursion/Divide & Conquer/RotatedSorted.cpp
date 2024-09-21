#include <iostream>
using namespace std;

int search(int arr[], int si, int ei, int tar)
{
    if (si > ei)
    {
        return -1;
    }

    int mid = si + (ei - si) / 2;
    if (arr[mid] == tar)
    {
        return mid;
    }

    if (arr[si] <= arr[mid])
    { // L1
        if (tar >= arr[si] && tar <= arr[mid])
        {
            // left
            return search(arr, si, mid - 1, tar);
        }
        else
        {
            // right
            return search(arr, mid + 1, ei, tar);
        }
    }

    else
    {
        // L2
        if (tar >= arr[mid] && tar <= arr[ei])
        {
            // right
            return search(arr, mid + 1, ei, tar);
        }
        else
        {
            // left
            return search(arr, si, mid - 1, tar);
        }
    }
}

int main()
{
    int arr[7] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;

    cout << "idx: " << search(arr, 0, n - 1, 2) << endl;
    return 0;
}