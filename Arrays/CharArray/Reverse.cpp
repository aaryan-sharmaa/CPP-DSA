//* Reverse Char Array

#include <iostream>
using namespace std;

void reverse(char a[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(a[i++], a[j--]);
    }
}

int main()
{
    char a[] = "Hello World!"; // 12
    reverse(a, 12);
    cout << "reverse = " << a << endl;
    return 0;
}