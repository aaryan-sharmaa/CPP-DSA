#include <iostream>
using namespace std;

//* Linear Search
int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    cout << "Key Not Found!";
}

int main()
{
    int arr[10] = {11, 29, 38, 41, 59, 10, 27, 18, 69, 36};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter the key: ";
    cin >> key;
    cout << "Key found at index : " << linearSearch(arr, n, key) << endl;
    return 0;
}