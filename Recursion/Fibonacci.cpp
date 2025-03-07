#include <iostream>
using namespace std;

// Fibonacci Series using Recursion
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n; // 0, 1
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}