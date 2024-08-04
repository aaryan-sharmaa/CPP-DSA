#include <iostream>
using namespace std;

int setIthBit(int num, int i)
{
    return (num | (1 << i));
}

int main()
{
    int result = setIthBit(6, 3);
    cout << result << endl;

    return 0;
}