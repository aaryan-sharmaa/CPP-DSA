#include <iostream>
using namespace std;

// int main()
// {
//     int a = 10;
//     int *ptr = &a;
//     int **pptr = &ptr;

//     cout << "Address of a is " << ptr << endl;
//     cout << "Address of ptr is " << pptr << endl;
//     cout << "value of a is " << *ptr << endl;
//     cout << "value of ptr is " << *pptr << endl;
//      *ptr = 20;
//     cout << a << endl;
//     return 0;
// }

// int main(){
//     int *ptr = NULL;
//     cout << *ptr << endl;
//     return 0;
// }


// pass by refernce using pointer
// void changeA(int *ptr)
// {
//     *ptr = 20;
//     cout << *ptr << "\n";
// }

// pass by refernce using Refernce variables
void changeA(int &a)
{
    a = 20;
    cout << a << "\n";
}

int main()
{
    int a = 10;
    int &b = a;
    b = 25;
    cout << b << "\n";
    cout << a << "\n";
    // changeA(&a);
    //cout << a << "\n"
    return 0;
}
