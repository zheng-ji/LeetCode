class Solution {

    public:
        int maxProfit(vector<int>& prices) {
            int local = 0, global = 0;
            for (int i=1; i < prices.size();i++) {
                local = max(local+prices[i]-price[i-1], 0);
                global = max(global, local);
            }
            return global;
        }
};
