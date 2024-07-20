//* Search in Sorted Matrix
//* https://leetcode.com/problems/search-a-2d-matrix/
//? Asked in : Adobe, Oracle.

#include <iostream>
using namespace std;

//* Brute Force Approach
// void search(int mat[][4], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (mat[i][j] == key)
//             {
//                 cout << "Element found at index " << i << " " << j << endl;
//             }
//         }
//     }
// }

//* Binary Search Approach
// int search(int mat[][4], int n, int key)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (mat[mid][0] == key)
//         {
//             cout << "Element found at index " << mid << " " << 0 << endl;
//         }
//         else if (mat[mid][0] > key)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

//* Staircase approach
bool search(int mat[][4], int n, int m, int key)
{
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (mat[i][j] == key)
        {
            cout << "Element found at index (" << i << "," << j << ")\n";
            return true;
        }
        else if (mat[i][j] > key)
        {
            j--; // left
        }
        else
        {
            i++; // down
        }
    }
    cout << "key not found!\n";
    return false;
}

int main()
{
    int matrix[4][4] = {{10, 20, 30, 40},
                        {15, 25, 35, 45},
                        {27, 29, 37, 48},
                        {32, 33, 39, 100}};

    int key = 16;
    search(matrix, 4, 4, 50);
    return 0;
}