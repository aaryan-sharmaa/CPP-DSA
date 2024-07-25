#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1 = {1, 2, 3,};
    cout << "size : " << vec1.size() << "\n";
    cout << "capacity : " << vec1.capacity() << "\n";

    vec1.push_back(5);
    cout << "size : " << vec1.size() << "\n";
    cout << "capacity : " << vec1.capacity() << "\n";
    return 0;
}