#include <iostream>
using namespace std;

class Animal
{
public:
    string color;
    void eat()
    {
        cout << "eats\n";
    }

    void breathe()
    {
        cout << "breathes\n";
    }
};

class Fish : protected Animal
{
public:
    int fins;
    void swim()
    {
        eat(); // Inherited while protected 
        cout << "swims\n";
    }
};

int main()
{
    Fish f1;
    f1.fins = 3;
    cout << f1.fins << endl;
    f1.swim();

    // not possible, if protected
    // f1.eat();
    // f1.breathe();

    return 0;
}