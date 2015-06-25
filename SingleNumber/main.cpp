class Solution {

    public:
        int singleNumber(vector<int>& nums) {
            map<int, int>hash;
            for (int i = 0; i < nums.size(); i++) {
                if (hash.find(nums[i]) == hash.end()) {
                    hash[nums[i]] = 1;
                } else {
                    hash[nums[i]] += 1;
                }

            }

            map<int,int>::iterator beg = hash.begin(), end = hash.end(), ite;
            for(ite = beg; ite != end; ite++) {
                if (ite->second == 1) {
                    return ite->first;
                }
            }
        }
}
