//* Print SubArrays
//* Time Complexity: O(n^3)

#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << ", ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printSubarrays(arr, n);

    return 0;
}
