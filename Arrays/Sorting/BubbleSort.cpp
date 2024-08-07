//* Bubble Sort
//* Time Complexity: O(n^2)
//* Space Complexity: O(1)
//? Idea : Compare adjacent elements and swap if they are in wrong order. Repeat until the array is sorted.

#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            // array is already sorted!
            return;
        }
    }
    print(arr, n);
}

int main()
{
    int arr[5] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    return 0;
}