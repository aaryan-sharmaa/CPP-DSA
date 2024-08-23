#include <iostream>
#include <string>
using namespace std;

// Abstract class
class Shape
{
public:
    virtual void draw() = 0; // Pure Virtual Fnx, abstract fnx
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Square" << endl;
    }
};

int main()
{
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();
    
    return 0;
}