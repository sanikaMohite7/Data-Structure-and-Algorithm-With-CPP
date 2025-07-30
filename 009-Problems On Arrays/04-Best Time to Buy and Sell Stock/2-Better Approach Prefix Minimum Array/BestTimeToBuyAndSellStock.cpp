//02-Best time to buy and sell stock(find maximum profit)-(Prefix Minimm array)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxProfitPrefixMin(const vector<int> prices)
{
    int n = prices.size();

    if(n == 0)
    {
        return 0;
    }

    vector<int> minPrice(n);
    minPrice[0] = prices[0];

    for(int i = 0; i< n; i++)
    {
        minPrice[i] = min(minPrice[i-1] ,prices[i]);
    }

    int maxProfit = 0;

    for(int i =1; i < n; i++)
    {
        maxProfit = max(maxProfit ,prices[i] - minPrice[i-1]);
    }

    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max Profit: " << maxProfitPrefixMin(prices) << endl;
}
