//* Grid ways

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gridWays(int r, int c, int m, int n)
{
    if (r == n - 1 || c == m - 1)
        return 1;
    if (r >= n || c >= m)
    {
        return 0;
    }
    return gridWays(r + 1, c, m, n) + gridWays(r, c + 1, m, n);
}

int main()
{
    int n = 3;
    int m = 3;

    cout << gridWays(0, 0, m, n);
    return 0;
}