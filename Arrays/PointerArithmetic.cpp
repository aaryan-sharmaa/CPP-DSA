#include <iostream>
using namespace std;

// Increment & Decrement

// int main()
// {
//     int a = 10;
//     int *aptr = &a;

//     cout << aptr << "\n";
//     aptr++; //1int ++
//     cout << aptr << "\n";

//     return 0;
// }

// int main()
// {
//     int ch = 'a';
//     int *ptr = &ch;

//     cout << ptr << "\n";
//     ptr++; // 1char ++
//     cout << ptr << "\n";

//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int *aptr = &a;

//     cout << aptr << "\n";
//     aptr--; //1int --
//     cout << aptr << "\n";

//     return 0;
// }

//! ADDITION & SUBTRACTION OF CONSTANTS - generally used in array pointer for traversing

// int main()
// {
//     int a = 10;
//     int *aptr = &a;

//     cout << aptr << "\n";
//     aptr = aptr + 3;      // 3 * int => 3 * 4 bytes = 12 bytes
//     cout << aptr << "\n"; // since hexadecimal so therefore, six places are skipped

//     return 0;
// }

// Array Traversing

// void printArr(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << *(ptr + i) << endl; // traversing

//     }
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     printArr(arr, n);

//     return 0;
// }

//! ADDITION & SUBTRACTION OF POINTERS

// int main()
// {
//     int a = 10;
//     int *ptr1 = &a;
//     int *ptr2 = ptr1 + 3;
//     cout << ptr2 << endl; // 3 * int => 3 * 4 bytes
//     cout << ptr1 << endl; // 1 * int => 1 * 4 bytes

//     cout << ptr2 - ptr1 << "\n";
//     return 0;
// }

//! Comparison

int main()
{
    int a = 10;
    int *ptr1 = &a;
    int *ptr2 = ptr1 + 3;

    cout << (ptr2 > ptr1) << "\n";
    cout << (ptr2 < ptr1) << "\n";
    cout << (*ptr1 == a) << "\n";
    return 0;
}
