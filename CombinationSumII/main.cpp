class Solution {
    public:
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<int> res;
            vector<vector<int> > ans;
            sort(candidates.begin(), candidates.end());
            solve(0, 0, res, target, candidates.size(), candidates, ans);
            return ans;
        }

        void solve(int sum, int cur, vector<int> &res, const int target, const int size, const vector<int> &candidates, vector<vector<int> > &ans) {
            if (sum == target) {
                ans.push_back(res);
                return;
            }
            for (int i = cur; i < size; i++) {
                if (sum + candidates[i] <= target) {
                    res.push_back(candidates[i]);
                    solve(sum+candidates[i], i+1, res, target, candidates.size(), candidates, ans);
                    res.pop_back();
                    while(i+1 < size && candidates[i] == candidates[i+1]) i++;
                }
            }
        } 
};
