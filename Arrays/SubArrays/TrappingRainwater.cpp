//* Trapping Rainwater
//* https://leetcode.com/problems/trapping-rain-water/
//* https://www.apnacollege.in/path-player?courseid=cpp-dsa&unit=663c8b695690d9789e010906Unit\
//? Time Complexity: O(n)

#include <iostream>
using namespace std;

int trap(int *height, int n)
{
    int leftMax[20000];
    leftMax[0] = height[0];

    int rightMax[20000];
    rightMax[n - 1] = height[n - 1];

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i + 1]);
    }
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - height[i];
        if (currWater > 0)
        {
            water += currWater;
        }
    }
    cout << "water trapped = " << water << endl;
    return water;
}
int main()
{
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);

    trap(height, n);
    return 0;
}
