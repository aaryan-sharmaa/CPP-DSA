#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;


    cout << "Address of a is " << ptr << endl;
    cout << "Address of ptr is " << pptr << endl;
    cout << "value of a is " << *ptr << endl;
    cout << "value of ptr is " << *pptr << endl;
     *ptr = 20;
    cout << a << endl;
    return 0;
}