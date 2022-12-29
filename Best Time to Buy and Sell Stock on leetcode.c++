class Solution {
public:
int maxProfit(vector<int>& prices) {
        int n = prices.size(), minm = INT_MAX, maxm = 0;
        for(int i = 0; i < n; i ++){
            minm = min(minm, prices[i]);
            maxm = max(prices[i] - minm, maxm);
        }
        return maxm;
    }
};