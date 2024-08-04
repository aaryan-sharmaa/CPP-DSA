#include <iostream>
using namespace std;

int countSetBits(int num)
{
    int count = 0;
    while (num)
    {
        count += num & 1;
        num = num >> 1;
    }

    cout << count << endl;
    return count;
}

int main()
{
    countSetBits(10);
    return 0;
}