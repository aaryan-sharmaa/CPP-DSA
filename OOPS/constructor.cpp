#include <iostream>
using namespace std;

class Car
{
    string name;
    string color;

public:
    Car()
    { // Non-Parameterized Contructor (default)
        cout << "constructor without parameters\n";
    }

    Car(string name, string color)
    { // Parameterized Contructor - For initialization
        cout << "constructor with parameters\n";
        this->name = name;
        this->color = color;
    }

    void start()
    {
        cout << "car has started..\n";
    }

    void stop()
    {
        cout << "car has stopped..\n";
    }

    // getter
    string getName()
    {
        return name;
    }
};

int main()
{          
    Car c0;    // non-parameter
    Car c1("mustang", "red"); // parameter
    Car c2("dodge", "black");

    return 0;
}