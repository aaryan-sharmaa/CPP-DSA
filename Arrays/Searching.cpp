#include <iostream>
using namespace std;

// Linear Search
// int linearSearch(int *arr, int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     cout << "Key Not Found!";
// }

// int main()
// {
//     int arr[10] = {11, 29, 38, 41, 59, 10, 27, 18, 69, 36};
//     int n = sizeof(arr) / sizeof(int);
//     int key;
//     cout << "Enter the key: ";
//     cin >> key;
//     cout << "Key found at index : " << linearSearch(arr, n, key) << endl;
//     return 0;
// }

// Reverse an Array using extra spaces

// void printArr(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {5, 4, 3, 9, 2};
//     int n = sizeof(arr) / sizeof(int);

//     int copyArr[n];
//     for (int i = 0; i < n; i++)
//     {
//         int j = n - i - 1;
//         copyArr[i] = arr[j];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = copyArr[i];
//     }
//     printArr(arr, n);
//     return 0;
// }

//! Reverse an Array without using extra spaces (2 Pointer approach)

// void printArr(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << ",";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {5, 4, 3, 9, 2};
//     int n = sizeof(arr) / sizeof(int);
//     int start = 0, end = n - 1;
//     while (start < end)
//     {
//         // int temp = arr[start];
//         // arr[start] = arr[end];
//         // arr[end] = temp;

//         // OR

//         swap(arr[start], arr[end]);

//         start++;
//         end--;
//     }

//     printArr(arr, n);
//     return 0;
// }

// Binary Search - ONLY FOR SORTED ARRAYS

// Step 1 - Find Mid
// Step 2 - Compare Mid with KEY
// Step 3 - If KEY is greater than Mid, then search in Right Half
// Step 4 - If KEY is smaller than Mid, then search in Left Half
// Step 5 - If KEY is equal to Mid, then return Mid Index
// Step 6 - If KEY is not present in the array, then return -1
// Step 7 - If KEY is present in the array, then return MID Index

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