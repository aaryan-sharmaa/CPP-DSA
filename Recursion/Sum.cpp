#include <iostream>
using namespace std;

// Sum of N natural numbers using Recursion
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{
    int ans = sum(5);
    cout << ans << endl;
    return 0;
}
