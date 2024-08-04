#include <iostream>
using namespace std;
int main()
{
    //* Bitwise Operators
    cout << (3 & 5) << "\n";
    cout << (3 | 5) << "\n";
    cout << (3 ^ 5) << "\n";

    //* One's Compliment
    cout << (~6) << endl; // Binary NOT Operator 
    cout << ~(-11) << endl; //10
    // ~n => (-(n) -1)

    //* Binary Shift Operators
    cout << (3 << 2) << endl; // Left Shift Operator
    // a << b => a * 2^b

    cout << (3 >> 2) << endl; // Right Shift Operator
    // a >> b => a / 2^b

    return 0;
}