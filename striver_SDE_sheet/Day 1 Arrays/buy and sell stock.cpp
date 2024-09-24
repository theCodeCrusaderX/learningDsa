class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_price = INT_MAX;
        int profit = 0;

        for (int i = 0; i < n; i++) {
            if(prices[i] < min_price) min_price = prices[i];  //finding minimum price 

            else if(prices[i]-min_price > profit) 
            {
                profit = prices[i] - min_price;
            }
          
        }
        return profit;
    }
};