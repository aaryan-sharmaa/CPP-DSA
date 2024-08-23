#include <iostream>
using namespace std;

class Example
{
public:
    // Constructor
    Example()
    {
        cout << "Constructor..\n";
    }

    // Destructor
    ~Example()
    {
        cout << "Destructor..\n";
    }
};


int main()
{
    int a = 0;
    if (a == 0)
    {
        static Example eg1;
    }

    cout << "Code Ending..\n";
    return 0;
}