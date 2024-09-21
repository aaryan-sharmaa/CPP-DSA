//* Spiral Matrix
//* https://leetcode.com/problems/spiral-matrix/
//? Asked in : Google, Microsoft, Adobe, Amazon, Oracle, Apple.

#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(vector<vector<int>>)
{

    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;


    while (srow <= erow && scol <= ecol)
    {
        // Top
        for (int j = scol; j <= ecol; j++)
        {
            cout << matrix[srow][j] << " ";
        }

        // Right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << matrix[i][ecol] << " ";
        }

        // Bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            cout << matrix[erow][j] << " ";
        }

        // Left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout << matrix[i][scol] << " ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout << endl;
};

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};

    spiralMatrix(matrix);   
    return 0;
}