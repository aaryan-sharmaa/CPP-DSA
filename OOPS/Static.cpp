#include <iostream>
using namespace std;

// void counter()
// {
//     static int count = 0;
//     count++;
//     cout << "count : " << count << endl;
// }

class Example
{
public:
    static int x;
};

int Example::x = 0;

int main()
{
    // counter();
    // counter();
    // counter();

    Example eg1;
    Example eg2;
    Example eg3;

    cout << eg1.x++ << endl;
    cout << eg1.x++ << endl;
    cout << eg1.x++ << endl;

    return 0;
}