#include <iostream>
#include <string>
using namespace std;

// Multi-level Inheritance
// class Animal
// {
// public:
//     string color;
//     void eat()
//     {
//         cout << "eats\n";
//     }

//     void breathe()
//     {
//         cout << "breathes\n";
//     }
// };

// class Mammal : public Animal
// {
// public:
//     string bloodType;

//     Mammal()
//     {
//         bloodType = "warm";
//     }
// };

// class Dog : public Mammal
// {
// public:
//     void tailwag()
//     {
//         cout << "a dog wags its tail\n";
//     }
// };

// int main()
// {
//     Dog d1;

//     d1.eat();
//     d1.breathe();
//     d1.tailwag();
//     cout << d1.bloodType << endl;

//     return 0;
// }

// Multiple Inheritance

class Teacher
{
public:
    int salary;
    string subject;
};

class Student
{
public:
    int rollno;
    float cgpa;
};

class TA : public Teacher, public Student
{
public:
    string name;
};

int main(){
    TA ta1;
    ta1.salary = 50000;
    ta1.subject = "C++";
    ta1.rollno = 1;
    ta1.cgpa = 8.5;
    ta1.name = "Aryan";
    
    cout << "Name: " << ta1.name << endl;
    cout << "Roll No: " << ta1.rollno << endl;
    cout << "CGPA: " << ta1.cgpa << endl;
    cout << "Salary: " << ta1.salary << endl;
    cout << "Subject: " << ta1.subject << endl;
    return 0;
}