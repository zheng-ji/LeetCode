class Solution {

    public:

        vector<string> summaryRanges(vector<int>& nums) {

            char buff[100];
            vector<string>range;

            if (nums.size() < 1) {
                return range;
            }

            if (nums.size() == 1) {
                sprintf(buff, "%d", nums[0]);
                range.push_back(string(buff));
                return range;
            }

            int start = 0;
            int end = start;
            for (int i=1; i<nums.size(); i++) {
                if (nums[i]-nums[i-1] == 1 || nums[i] == nums[i-1]) {
                    end++;    
                } else {
                    if (nums[start] != nums[end]) {
                        sprintf(buff, "%d->%d", nums[start], nums[end]);
                        range.push_back(string(buff));
                    } else {
                        sprintf(buff, "%d", nums[start]);
                        range.push_back(string(buff));
                    }
                    end ++;
                    start = end;
                }
            }

            if (nums[start] != nums[end]) {
                sprintf(buff, "%d->%d", nums[start], nums[end]);
                range.push_back(string(buff));           
            }  else {
                sprintf(buff, "%d", nums[start]);
                range.push_back(string(buff));
            }
            return range;
        }
};
