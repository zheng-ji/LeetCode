class Solution {

    public:

        bool isPalindrome(int x) {
            vector<int> ans;
            if (x < 0) return false;
            while(x) {
                ans.push_back(x % 10);
                x /= 10;
            }

            int left = 0;
            int right = ans.size() - 1;
            while (left < right) {
                if (ans[left] != ans[right]) return false;
                left++;
                right--;
            }
            return true;
        }

};
