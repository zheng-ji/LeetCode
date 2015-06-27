class Solution {

    public:
        int reverse(int n) {
            int sum = 0;
            if (n == 0) 
                return sum;

            bool is_negative = n < 0 ? true: false;
            n = abs(n);

            while(n) {
                sum = sum * 10 + n % 10;
                n = n / 10;
            }
            if (sum < 0) return -1;
            if (is_negative)
                return sum * -1;

            return sum;
        }
};

