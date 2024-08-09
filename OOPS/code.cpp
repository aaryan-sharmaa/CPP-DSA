#include <iostream>
using namespace std;

class Student
{
    // private:
    //     string name;

public:
    string name;
    float cgpa;

    // Methods
    void getPercentage()
    {
        cout << (cgpa * 10) << "%\n";
    }
};

// class User
// {
//     string username, password, bio;
//     int id;

//     void deactivate()
//     {
//         cout << "deleting account" << endl;
//     }

//     void editBio(string newBio)
//     {
//         bio = newBio;
//     }
// };

int main()
{
    Student s1; // object
    s1.name = "Aryan";
    s1.cgpa = 9.0;
    cout << s1.name << endl;
    cout << s1.cgpa << endl;
    s1.getPercentage();
    return 0;
}