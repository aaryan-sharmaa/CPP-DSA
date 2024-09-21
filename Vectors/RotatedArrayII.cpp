//* https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

#include <iostream>
#include <vector>
using namespace std;

bool search(const vector<int> &arr, int tar)
{
    int si = 0;
    int ei = arr.size() - 1;

    while (si <= ei)
    {

        int mid = si + (ei - si) / 2;
        if (arr[mid] == tar)
        {
            return true;
        }

        if (arr[si] == arr[mid] && arr[ei] == arr[mid])
        {
            si++;
            ei--;
        }
        else if (arr[si] <= arr[mid])
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
    return false;
}
int main()
{
    vector<int> arr = {1, 0, 1, 1, 1};

    cout << "idx: " << search(arr, 0) << endl;
    return 0;
}
