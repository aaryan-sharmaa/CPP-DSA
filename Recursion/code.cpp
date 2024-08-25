#include <iostream>
using namespace std;

// Recursive Function - Recursion
void func()
{
    cout << "Hello, World!" << endl;
    func();
}

int main()
{
    func();
    return 0;
}