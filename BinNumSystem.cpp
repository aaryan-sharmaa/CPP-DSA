// Binary to Decimal Conversion
#include <iostream>
using namespace std;

void binToDec(int binNum)
{
    int n = binNum;
    int decNum = 0;
    int pow = 1;
    while (n > 0)
    {
        int lastDig = n % 10;
        decNum += lastDig * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout << decNum << endl;
}

// Decimal to Binary Conversion
void decToBin(int decNum)
{
    int n = decNum;
    int binNum = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        binNum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }
    cout << binNum << endl;
}

int main()
{
    binToDec(1010);
    decToBin(10);
    return 0;
}