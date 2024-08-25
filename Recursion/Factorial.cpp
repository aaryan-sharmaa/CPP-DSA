#include <iostream>
using namespace std;

// Factorial using Recursion
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{
    int ans = fact(10);
    cout << ans << endl;
    return 0;
}
