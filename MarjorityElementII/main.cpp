class Solution {

    public:
        
        vector<int> majorityElement(vector<int>& nums) {

            map<int,int>tmp;
            vector<int> ans;
            int count = nums.size() / 3;

            for (int i = 0; i < nums.size(); i++) {
                if (tmp.find(nums[i]) == tmp.end()) {
                    tmp[nums[i]] = 1;
                } else {
                    tmp[nums[i]] += 1;
                }
            }

            map<int,int>::iterator it;
            for (it = tmp.begin(); it != tmp.end(); it++) {
                if (it->second > count) {
                    ans.push_back(it->first);
                }
            }
            return ans;
        }
};
