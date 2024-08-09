#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    float cgpa;

public:
    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "%\n";
    }

    // Setters
    void setName(string n)
    {
        name = n;
    }

    void setCgpa(float newVal)
    {
        cgpa = newVal;
    }

    // Getters
    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1;
    s1.setName("Aryan");
    s1.setCgpa(8.5);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    return 0;
}