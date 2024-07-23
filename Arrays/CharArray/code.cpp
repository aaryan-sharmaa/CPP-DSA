#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    char name[10];
    cin.getline(name,10); //ignore characters after white space

    cout << "My Name is " << name << endl;
    cout << "length = " << strlen(name) << endl;
    return 0;
}