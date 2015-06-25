class Solution {

    public:
        int maxProfit(vector<int>& prices) {
            int local = 0;
            int global = 0;
            for (int i = 0; i < prices.size()-1; i++) {
                local = max(local+price[i+1]-price[i], 0);
                global = max(local, global);
            }
            return global;
        }
};
