class Solution {

    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) {
                return strs;
            }
            for (i = 0; i < strs[0].size(); i++) {
                for (j = 1; j < strs.size(); j++) {
                    if (i == strs[j].size()) {
                        return strs[j];
                    }
                    if (i < strs[j].size() && strs[0][i] != strs[j][i]) {
                        return strs.substr(0, i);
                    }
                }
            }
        }
};
