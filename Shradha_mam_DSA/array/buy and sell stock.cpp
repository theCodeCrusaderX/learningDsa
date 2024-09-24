class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int n = prices.size();
        int profit = 0;

        for(int i=0;i<n-1;i++)
        {
            if(prices[i] < buy) buy = prices[i];

            if((prices[i+1]-buy > 0)) profit = max((prices[i+1]-buy),profit);
        }
        return profit;
    }
};