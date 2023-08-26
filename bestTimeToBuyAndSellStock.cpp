class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minStock = INT_MAX;
        int profit=0,res =0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minStock)
            {
                minStock = prices[i];
            }
            profit = prices[i]-minStock;
            if(res<profit) res= profit;
        }
        return res;
    }
};