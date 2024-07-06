brute force approach
time complexity is O(n^2)
extra space complexity is O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;

        for (int i = 0; i < n; i++) {
            int buy = prices[i];

            for (int j = i + 1; j < n; j++) {
                if (buy < prices[j]) {
                    profit = max(profit,prices[j]-buy);
                }
            }
        }
        return profit;
    }
};

optimal solution
time complexity is O(n)
extra space complexity is O(1)


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_price = INT_MAX;
        int profit = 0;

        for (int i = 0; i < n; i++) {
          //we are require to find the min val to buy the stock 
            if(prices[i] < min_price) min_price = prices[i];

            else if(prices[i]-min_price > profit) 
            {
                profit = prices[i] - min_price;
            }
          
        }
        return profit;
    }
};