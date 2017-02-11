class Solution {
    public:
        vector<vector<int>> combine(int n, int k) {
            vector<vector<int> > ans;
            vector<int> vist;
            solve(0, 1, n, k, vist, ans);
            return ans;
        }
        void solve(int cnt,  int cur, const int n, const int k, vector<int> &vist, vector<vector<int> > &ans) {
            if (cnt == k) {
                ans.push_back(vist);
                return;
            }
            for (int i = cur; i <= n; i++) {
                if (cnt + 1 <= k) {
                    vist.push_back(i);
                    solve(cnt+1, i+1, n, k , vist, ans);
                    vist.pop_back();
                }
            }
        }
};
