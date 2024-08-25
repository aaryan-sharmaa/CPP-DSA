#include <iostream>
#include <vector>
using namespace std;

// Last Occurenece in a Vector using Recursion
int LastOcc(vector<int> arr, int target, int i)
{
    if (i == arr.size())
    {
        return -1;
    }

    int idxFound = LastOcc(arr, target, i + 1);
    if (idxFound == -1 && arr[i] == target)
    {
        return i;
    }

    return idxFound;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    cout << LastOcc(arr, 2, 0) << endl;
    return 0;
}