#include <iostream>
using namespace std;

void printArr(int nums[], int n) //While passing the array , we should also pass the size of the array as a parameter
{
    // cout << sizeof(nums) << endl; //8 = Size of integer pointer not array
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << ",";
        }
        cout << endl;
}

int main()
{
    // int a = 5;
    // int *ptr = &a;
    // cout << ptr << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << "Array size : " << sizeof(arr) << endl; //20

    printArr(arr, n);
    return 0;
    // func2(arr);              // Passing array name is equivalent to passing the pointer
    // cout << arr[0] << endl;  // Changes are done in actual Array not in a copy

    // cout << arr << endl;    // In C++, Array names can be converted to Pointers
    // cout << *arr << endl;   //arr[0]
    // cout << *(arr + 1) << endl;     //arr[1]
}