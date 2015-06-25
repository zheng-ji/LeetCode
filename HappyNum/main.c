class Solution {

    public:

        bool isHappy(int n) {
            set<int> nums;
            while(true) {
                if (n == 1) {
                    return true;
                }
                if (nums.find(n) == nums.end()) {
                    nums.insert(n);
                    int sum = 0;
                    while (n) {
                        int m = n % 10;
                        sum += m * m;
                        n /= 10;
                    }
                    n = sum;
                } else {
                    return false;
                }
            }
        }
};
