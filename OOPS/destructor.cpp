//* Copy Constructor
//* Shallow & Deep Copy
//* Destructor

#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
        mileage = new int; // Dynamic Allocation
        *mileage = 12;
    }

    Car(Car &original)
    {
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
        // mileage = original.mileage; //Shallow Copy

        mileage = new int;            // Deep Copy
        *mileage = *original.mileage; // Deep Copy
    }

    //*Destructor
    ~Car()
    {
        cout << "deleting object..\n";
        if (mileage != NULL)
        {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main()
{
    Car c1("mustang", "black");

    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;

    return 0;
}