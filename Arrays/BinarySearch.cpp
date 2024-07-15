//* Binary Search - ONLY FOR SORTED ARRAYS

//* Step 1 - Find Mid
//* Step 2 - Compare Mid with KEY
//* Step 3 - If KEY is greater than Mid, tFhen search in Right Half
//* Step 4 - If KEY is smaller than Mid, then search in Left Half
//* Step 5 - If KEY is equal to Mid, then return Mid Index
//* Step 6 - If KEY is not present in the array, then return -1
//* Step 7 - If KEY is present in the array, then return MID Index

#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(int);
    int key = 16;
    cout << binSearch(arr, n, key);
    return 0;
}