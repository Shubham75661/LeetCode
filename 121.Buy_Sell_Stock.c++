class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minv = prices[0];
       int profit = 0;

       for(int i = 0; i<prices.size(); i++){
           minv = min(minv, prices[i]);
           profit = max(profit, prices[i]-minv);
       } 
       return profit;
    }
};