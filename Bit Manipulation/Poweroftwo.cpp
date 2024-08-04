//* Power of two
//* https://leetcode.com/problems/power-of-two/

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
    {
        return false;
    }
    if (!(n & (n - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }

    // OR

   // return n > 0 && !(n & (n - 1));
}

int main()
{
    cout << isPowerOfTwo(32) << endl;
    cout << isPowerOfTwo(24) << endl;
    cout << isPowerOfTwo(0) << endl;
    return 0;
}
