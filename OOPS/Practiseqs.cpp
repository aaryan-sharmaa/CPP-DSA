#include <iostream>
using namespace std;

class User
{
private:
    int id;
    string password;

public:
    string username;

    // Parameterized Constructor
    User(int id)
    {
        this->id = id;
    }

    // Getter
    string getPass()
    {
        return password;
    }

    // Setter
    void setPass(string password)
    {
        this->password = password;
    }
};

int main()
{
    User user1(101);
    user1.username = "aaryan-sharmaa";
    user1.setPass("1111ABCD");

    cout << "username : " << user1.username << endl;
    cout << "password : " << user1.getPass() << endl;
    return 0;
}