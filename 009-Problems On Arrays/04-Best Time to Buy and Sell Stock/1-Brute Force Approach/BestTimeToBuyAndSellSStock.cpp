//01-Best time to buy and sell stock(find maximum profit)-(Brute-Force Approach)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxProfit(vector<int> prices)
{
    int n = prices.size();
    int maxProfit = 0;

    for(int i =0; i < n; i++)
    {
        for(int j = i +1; j < n; j++)
        { 
            int profit = prices[j] - prices[i];
            maxProfit = max(maxProfit ,profit);
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << maxProfit(prices) << endl;
}
