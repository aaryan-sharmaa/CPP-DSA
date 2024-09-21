//* https://leetcode.com/problems/search-in-rotated-sorted-array/

#include <iostream>
#include <vector>
using namespace std;

int search(const vector<int> &arr, int tar)
{
    int si = 0;
    int ei = arr.size() - 1;

    while (si <= ei)
    {

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
                ei = mid - 1;
            }
            else
            {
                // right
                si = mid + 1;
            }
        }

        else
        {
            // L2
            if (tar >= arr[mid] && tar <= arr[ei])
            {
                // right
                si = mid + 1;
            }
            else
            {
                // left
                ei = mid - 1;
                ;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

    cout << "idx: " << search(arr, 0) << endl;
    return 0;
}
