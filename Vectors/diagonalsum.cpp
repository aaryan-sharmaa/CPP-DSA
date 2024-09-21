//* Diagonal Sum
//* https://leetcode.com/problems/diagonal-traverse/
//? Asked in : Samsung, Amazon, Microsoft.

#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> arr)
{
    int sum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        if (i != n - i - 1)
        {
            sum += arr[i][n - i - 1];
        }
    }
    cout << "sum = " << sum << endl;
    return sum;
}

int main()
{
    vector<vector<int>> matrix =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};

    diagonalSum(matrix);
    return 0;
}