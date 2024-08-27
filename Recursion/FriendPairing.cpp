#include <iostream>
using namespace std;

//* Friend Pairing Problem - Goldman Sachs
// Find total ways in which  friends can be paired up. Each friend can only be paired once.

int friendsPairing(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }

    return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}

int main()
{
    cout << friendsPairing(3) << endl;
    return 0;
}