#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Parent class show.." << endl;
    }

    virtual void hello()
    {
        cout << "parent hello\n";
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class show.." << endl;
    }

    virtual void hello()
    {
        cout << "child hello\n";
    }
};

int main()
{
    Child child1;
    // child1.show();

    Parent *ptr;
    ptr = &child1; // Run Time Binding
    ptr->hello(); //Virtual Functions
    return 0;
}