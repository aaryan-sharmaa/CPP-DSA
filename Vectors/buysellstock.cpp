//* Buy & Sell Stocks
//* https://www.apnacollege.in/path-player?courseid=cpp-dsa&unit=663c8b3d50b707789e026cd6Unit
//* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//? Time Complexity: O(n)

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void maxProfit(vector<int> prices)
{
    int n = prices.size();
    vector<int> bestBuy(100000, INT_MAX);
    bestBuy[0] = prices[0];

    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
        cout << bestBuy[i] << " ,";
    }
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << " Max Profit = " << maxProfit << endl;
}
int main()
{

    vector<int> prices = {7, 1, 5, 3, 6, 4};
    maxProfit(prices);
    return 0;
}