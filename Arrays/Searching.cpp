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

// Reverse an Array without using extra spaces (2 Pointer approach)

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);
    int start = 0, end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printArr(arr, n);
    return 0;
}